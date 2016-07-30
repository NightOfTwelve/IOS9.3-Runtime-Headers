//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@class NSBundle, NSMutableDictionary, NSString;

@interface TSDFrameSpec : NSObject <NSCopying>
{
    NSBundle *mBundle;
    NSString *mFrameName;
    double mLeftInset;
    double mRightInset;
    double mTopInset;
    double mBottomInset;
    struct CGPoint mAdornmentPosition;
    double mMinimumAssetScale;
    int mTilingMode;
    _Bool mDisplayInPicker;
    _Bool mHasImages;
    _Bool mHasMask;
    _Bool mHasAdornment;
    NSMutableDictionary *mProvidersByKey;
    _Bool mLoadedImageMetrics;
    double mLeftWidth;
    double mRightWidth;
    double mTopHeight;
    double mBottomHeight;
    struct CGSize mAdornmentSize;
    int mInterest;
}

+ (id)p_imageKeys;
+ (id)frameSpecWithName:(id)arg1;
+ (id)frameSpecs;
@property(readonly, nonatomic) _Bool displayInPicker; // @synthesize displayInPicker=mDisplayInPicker;
@property(readonly, copy, nonatomic) NSString *frameName; // @synthesize frameName=mFrameName;
- (void)p_loadImageMetrics;
- (id)p_imageDataForKey:(id)arg1;
- (id)p_infoDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithBundle:(id)arg1 isVolatile:(_Bool)arg2;
- (int)i_tilingMode;
- (struct CGPoint)i_adornmentPosition;
- (double)i_minimumAssetScale;
- (struct CGSize)i_adornmentSize;
- (double)i_bottomHeight;
- (double)i_topHeight;
- (double)i_rightWidth;
- (double)i_leftWidth;
- (double)i_bottomInset;
- (double)i_topInset;
- (double)i_rightInset;
- (double)i_leftInset;
- (id)i_providerForIndex:(int)arg1 mask:(_Bool)arg2;
- (void)i_removeInterestInProviders;
- (void)i_addInterestInProviders;
- (_Bool)i_hasAdornment;
- (_Bool)i_hasMask;
- (_Bool)i_hasImages;

@end

