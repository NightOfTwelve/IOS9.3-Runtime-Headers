//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPUIGraphicalAttachment.h>

@class TSTExpressionNode;

__attribute__((visibility("hidden")))
@interface TSTWPTokenAttachment : TSWPUIGraphicalAttachment
{
    TSTExpressionNode *mExpressionNode;
    _Bool mActive;
    _Bool mSelected;
    _Bool mHighlighted;
    _Bool mNeverShowsMenu;
    struct CGSize mTextSize;
    struct CGRect mMenuRect;
    struct CGImage *mCachedImage;
    double mCachedImageScreenScale;
    _Bool mInInvalidate;
}

@property(nonatomic) double cachedImageScreenScale; // @synthesize cachedImageScreenScale=mCachedImageScreenScale;
@property(nonatomic, getter=neverShowsMenu) _Bool neverShowsMenu; // @synthesize neverShowsMenu=mNeverShowsMenu;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=mHighlighted;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=mSelected;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=mActive;
@property(retain, nonatomic) TSTExpressionNode *expressionNode; // @synthesize expressionNode=mExpressionNode;
- (id)description;
- (void)saveToArchive:(struct TokenAttachmentArchive *)arg1 archiver:(id)arg2;
- (id)initFromArchive:(const struct TokenAttachmentArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)invalidate;
@property(nonatomic) struct CGImage *cachedImage;
- (void)requestRedraw;
- (id)detokenizedText;
- (id)formulaPlainText;
- (id)copyIntoContext:(id)arg1 bakeModes:(_Bool)arg2;
- (id)copyIntoContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 expressionNode:(id)arg2;

@end

