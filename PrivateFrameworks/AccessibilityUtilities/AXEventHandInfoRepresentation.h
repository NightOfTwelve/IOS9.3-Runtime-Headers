//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/NSCopying-Protocol.h>
#import <AccessibilityUtilities/NSSecureCoding-Protocol.h>

@class NSArray;

@interface AXEventHandInfoRepresentation : NSObject <NSSecureCoding, NSCopying>
{
    unsigned char _systemGesturePossible;
    unsigned char _swipe;
    unsigned short _initialFingerCount;
    unsigned short _currentFingerCount;
    unsigned int _eventType;
    unsigned int _handIdentity;
    unsigned int _handIndex;
    unsigned int _handEventMask;
    NSArray *_paths;
    struct CGPoint _handPosition;
}

+ (id)representationWithHandInfo:(CDStruct_f2c5c900 *)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned char swipe; // @synthesize swipe=_swipe;
@property(nonatomic) unsigned int handEventMask; // @synthesize handEventMask=_handEventMask;
@property(nonatomic) struct CGPoint handPosition; // @synthesize handPosition=_handPosition;
@property(nonatomic) unsigned int handIndex; // @synthesize handIndex=_handIndex;
@property(nonatomic) unsigned int handIdentity; // @synthesize handIdentity=_handIdentity;
@property(nonatomic) unsigned char systemGesturePossible; // @synthesize systemGesturePossible=_systemGesturePossible;
@property(retain, nonatomic) NSArray *paths; // @synthesize paths=_paths;
@property(nonatomic) unsigned short currentFingerCount; // @synthesize currentFingerCount=_currentFingerCount;
@property(nonatomic) unsigned short initialFingerCount; // @synthesize initialFingerCount=_initialFingerCount;
@property(nonatomic) unsigned int eventType; // @synthesize eventType=_eventType;
- (id)description;
- (id)_tabularDescription;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeToHandInfo:(CDStruct_f2c5c900 *)arg1;
- (unsigned long long)length;

@end

