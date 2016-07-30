//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/NSCopying-Protocol.h>
#import <AccessibilityUtilities/NSSecureCoding-Protocol.h>

@class AXEventAccelerometerInfoRepresentation, AXEventGameControllerInfoRepresentation, AXEventHandInfoRepresentation, AXEventKeyInfoRepresentation, NSData, NSString;

@interface AXEventRepresentation : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _isBuiltIn;
    _Bool _isDisplayIntegrated;
    _Bool _isGeneratedEvent;
    _Bool _useOriginalHIDTime;
    unsigned int _type;
    int _subtype;
    int _flags;
    unsigned int _taskPort;
    int _pid;
    unsigned int _contextId;
    unsigned int _willUpdateMask;
    unsigned int _didUpdateMask;
    unsigned long long _time;
    unsigned long long _senderID;
    AXEventHandInfoRepresentation *_handInfo;
    AXEventKeyInfoRepresentation *_keyInfo;
    AXEventAccelerometerInfoRepresentation *_accelerometerInfo;
    AXEventGameControllerInfoRepresentation *_gameControllerInfo;
    NSString *_clientId;
    unsigned long long _HIDTime;
    NSData *_HIDAttributeData;
    long long _scrollAmount;
    unsigned long long _additionalFlags;
    long long _generationCount;
    struct __IOHIDEvent *_creatorHIDEvent;
    void *_window;
    NSData *_data;
    struct CGPoint _location;
    struct CGPoint _windowLocation;
}

+ (id)touchRepresentationWithHandType:(unsigned int)arg1 location:(struct CGPoint)arg2;
+ (id)buttonRepresentationWithType:(unsigned int)arg1;
+ (id)keyRepresentationWithType:(unsigned int)arg1;
+ (id)accelerometerRepresentation:(id)arg1;
+ (id)representationWithEventRecord:(CDStruct_7f3c0925 *)arg1;
+ (id)representationWithHIDEvent:(struct __IOHIDEvent *)arg1 hidStreamIdentifier:(id)arg2;
+ (id)representationWithLocation:(struct CGPoint)arg1 windowLocation:(struct CGPoint)arg2 handInfo:(id)arg3;
+ (id)_gameControllerEvent:(struct __IOHIDEvent *)arg1;
+ (id)_wheelEvent:(struct __IOHIDEvent *)arg1;
+ (id)_keyboardButtonEvent:(struct __IOHIDEvent *)arg1;
+ (id)_digitizerRepresentation:(struct __IOHIDEvent *)arg1 hidStreamIdentifier:(id)arg2;
+ (id)representationWithType:(unsigned int)arg1 subtype:(int)arg2 time:(unsigned long long)arg3 location:(struct CGPoint)arg4 windowLocation:(struct CGPoint)arg5 handInfo:(id)arg6;
+ (id)representationWithData:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) void *window; // @synthesize window=_window;
@property(retain, nonatomic) struct __IOHIDEvent *creatorHIDEvent; // @synthesize creatorHIDEvent=_creatorHIDEvent;
@property(nonatomic) _Bool useOriginalHIDTime; // @synthesize useOriginalHIDTime=_useOriginalHIDTime;
@property(nonatomic) _Bool isGeneratedEvent; // @synthesize isGeneratedEvent=_isGeneratedEvent;
@property(nonatomic) unsigned int didUpdateMask; // @synthesize didUpdateMask=_didUpdateMask;
@property(nonatomic) unsigned int willUpdateMask; // @synthesize willUpdateMask=_willUpdateMask;
@property(nonatomic) long long generationCount; // @synthesize generationCount=_generationCount;
@property(nonatomic) _Bool isDisplayIntegrated; // @synthesize isDisplayIntegrated=_isDisplayIntegrated;
@property(nonatomic) _Bool isBuiltIn; // @synthesize isBuiltIn=_isBuiltIn;
@property(nonatomic) unsigned int contextId; // @synthesize contextId=_contextId;
@property(nonatomic) unsigned long long additionalFlags; // @synthesize additionalFlags=_additionalFlags;
@property(nonatomic) long long scrollAmount; // @synthesize scrollAmount=_scrollAmount;
@property(retain, nonatomic) NSData *HIDAttributeData; // @synthesize HIDAttributeData=_HIDAttributeData;
@property(nonatomic) unsigned long long HIDTime; // @synthesize HIDTime=_HIDTime;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) unsigned int taskPort; // @synthesize taskPort=_taskPort;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) AXEventGameControllerInfoRepresentation *gameControllerInfo; // @synthesize gameControllerInfo=_gameControllerInfo;
@property(retain, nonatomic) AXEventAccelerometerInfoRepresentation *accelerometerInfo; // @synthesize accelerometerInfo=_accelerometerInfo;
@property(retain, nonatomic) AXEventKeyInfoRepresentation *keyInfo; // @synthesize keyInfo=_keyInfo;
@property(retain, nonatomic) AXEventHandInfoRepresentation *handInfo; // @synthesize handInfo=_handInfo;
@property(nonatomic) unsigned long long senderID; // @synthesize senderID=_senderID;
@property(nonatomic) int flags; // @synthesize flags=_flags;
@property(nonatomic) unsigned long long time; // @synthesize time=_time;
@property(nonatomic) struct CGPoint windowLocation; // @synthesize windowLocation=_windowLocation;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(nonatomic) int subtype; // @synthesize subtype=_subtype;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (id)_senderNameForID;
- (id)description;
- (id)_tabularDescription;
- (unsigned int)firstPathContextId;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct __GSEvent *)newGSEventRef;
- (CDStruct_7f3c0925 *)newEventRecord;
- (struct __IOHIDEvent *)_newHandHIDEventRef;
- (id)denormalizedEventRepresentation:(_Bool)arg1 descale:(_Bool)arg2;
- (void)neuterUpdates;
- (void)modifyPoints:(CDUnknownBlockType)arg1;
- (id)fakeTouchScaleEventRepresentation:(_Bool)arg1;
- (id)normalizedEventRepresentation:(_Bool)arg1 scale:(_Bool)arg2;
- (struct __IOHIDEvent *)_newButtonHIDEventRef;
- (struct __IOHIDEvent *)_newKeyboardHIDEventRef;
- (struct __IOHIDEvent *)_newAccelerometerHIDEventRef;
- (_Bool)_isDownEvent;
- (struct __IOHIDEvent *)newHIDEventRef;
- (unsigned int)_contextIDFromHIDEvent:(struct __IOHIDEvent *)arg1;
- (id)dataRepresentation;
@property(readonly, nonatomic) _Bool willBeUpdated;
@property(readonly, nonatomic) _Bool isUpdate;
- (void)resetInitialTouchCountValueForHidStreamIdentifier:(id)arg1;
@property(readonly, nonatomic) _Bool isCancel;
@property(readonly, nonatomic) _Bool isInRangeLift;
@property(readonly, nonatomic) _Bool isInRange;
@property(readonly, nonatomic) _Bool isLift;
@property(readonly, nonatomic) _Bool isChordChange;
@property(readonly, nonatomic) _Bool isMove;
@property(readonly, nonatomic) _Bool isTouchDown;
@property(readonly, nonatomic) unsigned long long fingerCount;

@end

