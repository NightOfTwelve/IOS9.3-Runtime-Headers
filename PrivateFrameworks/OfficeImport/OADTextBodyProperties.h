//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADProperties.h>

@class OADTextBodyAutoFit, OADTextWarp;

__attribute__((visibility("hidden")))
@interface OADTextBodyProperties : OADProperties
{
    OADTextBodyAutoFit *mAutoFit;
    OADTextWarp *mTextWarp;
    float mTopInset;
    float mLeftInset;
    float mBottomInset;
    float mRightInset;
    float mRotation;
    float mColumnSpacing;
    unsigned short mColumnCount;
    unsigned short mTextBodyId;
    unsigned char mTextAnchorType;
    unsigned char mFlowType;
    unsigned char mWrapType;
    unsigned char mVerticalOverflowType;
    unsigned char mHorizontalOverflowType;
    unsigned int mRepectFirstLastParagraphSpacing:1;
    unsigned int mIsUpright:1;
    unsigned int mIsAnchorCenter:1;
    unsigned int mIsLeftToRightColumns:1;
    unsigned int mHasVerticalOverflowType:1;
    unsigned int mHasHorizontalOverflowType:1;
    unsigned int mHasTextBodyId:1;
    unsigned int mHasFlowType:1;
    unsigned int mHasWrapType:1;
    unsigned int mHasTextAnchorType:1;
    unsigned int mHasIsAnchorCenter:1;
    unsigned int mHasIsUpright:1;
    unsigned int mHasRotation:1;
    unsigned int mHasColumnCount:1;
    unsigned int mHasColumnSpacing:1;
    unsigned int mHasIsLeftToRightColumns:1;
    unsigned int mHasRepectFirstLastParagraphSpacing:1;
    unsigned int mHasTopInset:1;
    unsigned int mHasLeftInset:1;
    unsigned int mHasRightInset:1;
    unsigned int mHasBottomInset:1;
}

+ (id)defaultEscherWordArtProperties;
+ (id)defaultProperties;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)removeUnnecessaryOverrides;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (void)setRotation:(float)arg1;
- (float)rotation;
- (_Bool)hasRotation;
- (void)setIsUpright:(_Bool)arg1;
- (_Bool)isUpright;
- (_Bool)hasIsUpright;
- (void)setTextAnchorType:(unsigned char)arg1;
- (unsigned char)textAnchorType;
- (_Bool)hasTextAnchorType;
- (void)setIsAnchorCenter:(_Bool)arg1;
- (_Bool)isAnchorCenter;
- (_Bool)hasIsAnchorCenter;
- (_Bool)isWarped;
- (void)setTextWarp:(id)arg1;
- (id)textWarp;
- (_Bool)hasTextWarp;
- (void)setTextBodyId:(int)arg1;
- (int)textBodyId;
- (_Bool)hasTextBodyId;
- (void)setHorizontalOverflowType:(unsigned char)arg1;
- (unsigned char)horizontalOverflowType;
- (_Bool)hasHorizontalOverflowType;
- (void)setVerticalOverflowType:(unsigned char)arg1;
- (unsigned char)verticalOverflowType;
- (_Bool)hasVerticalOverflowType;
- (void)setWrapType:(unsigned char)arg1;
- (unsigned char)wrapType;
- (_Bool)hasWrapType;
- (void)setFlowType:(unsigned char)arg1;
- (unsigned char)flowType;
- (_Bool)hasFlowType;
- (void)setAutoFit:(id)arg1;
- (id)autoFit;
- (_Bool)hasAutoFit;
- (void)setIsLeftToRightColumns:(_Bool)arg1;
- (_Bool)isLeftToRightColumns;
- (_Bool)hasIsLeftToRightColumns;
- (void)setColumnSpacing:(float)arg1;
- (float)columnSpacing;
- (_Bool)hasColumnSpacing;
- (void)setColumnCount:(int)arg1;
- (int)columnCount;
- (_Bool)hasColumnCount;
- (void)setRightInset:(float)arg1;
- (float)rightInset;
- (void)setBottomInset:(float)arg1;
- (float)bottomInset;
- (void)setLeftInset:(float)arg1;
- (float)leftInset;
- (void)setTopInset:(float)arg1;
- (float)topInset;
- (_Bool)hasBottomInset;
- (_Bool)hasRightInset;
- (_Bool)hasLeftInset;
- (_Bool)hasTopInset;
- (void)setRespectLastFirstLineSpacing:(_Bool)arg1;
- (_Bool)respectLastFirstLineSpacing;
- (_Bool)hasRespectLastFirstLineSpacing;
- (void)dealloc;
- (id)initWithDefaults;
- (id)init;

@end

