//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/OABFillPropertiesManager-Protocol.h>

@class NSString;
@protocol OABPropertiesManager;

__attribute__((visibility("hidden")))
@interface OABFillPropertiesManager : NSObject <OABFillPropertiesManager>
{
    const struct EshFill *mFill;
    int mShapeType;
    id <OABPropertiesManager> mMasterManager;
}

- (id)fillBlipName;
- (struct EshBlip *)fillBlipDataReference;
- (unsigned int)fillBlipID;
- (const struct EshTablePropVal<EshGradientStop> *)fillGradientColors;
- (int)fillFocusBottom;
- (int)fillFocusRight;
- (int)fillFocusTop;
- (int)fillFocusLeft;
- (int)fillFocus;
- (int)fillAngle;
- (int)fillBgAlpha;
- (int)fillFgAlpha;
- (int)fillType;
- (struct EshColor)shadowColor;
- (struct EshColor)strokeBgColor;
- (struct EshColor)strokeFgColor;
- (_Bool)isStroked;
- (struct EshColor)fillBgColor;
- (struct EshColor)fillFgColor;
- (_Bool)isFilled;
- (void)dealloc;
- (id)initWithFill:(const struct EshFill *)arg1 shapeType:(int)arg2 masterShape:(struct EshShape *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

