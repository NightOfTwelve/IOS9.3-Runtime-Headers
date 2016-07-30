//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSIndexPath, NSIndexSet, NSString, PUSectionedGridLayout, PUSectionedGridLayoutInvalidationContext;

@protocol PUSectionedGridLayoutDelegate <NSObject>

@optional
- (NSString *)sectionedGridLayoutName:(PUSectionedGridLayout *)arg1;
- (void)sectionedGridLayout:(PUSectionedGridLayout *)arg1 didInvalidateWithContext:(PUSectionedGridLayoutInvalidationContext *)arg2;
- (NSIndexSet *)sectionedGridLayout:(PUSectionedGridLayout *)arg1 sectionsForVisualSection:(long long)arg2;
- (long long)numberOfVisualSectionsForSectionedGridLayout:(PUSectionedGridLayout *)arg1;
- (_Bool)sectionedGridLayoutTransitionAutoAdjustContentOffsetEnabled:(PUSectionedGridLayout *)arg1;
- (struct CGPoint)sectionedGridLayout:(PUSectionedGridLayout *)arg1 targetContentOffsetForProposedUpdatesContentOffset:(struct CGPoint)arg2;
- (NSIndexPath *)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(PUSectionedGridLayout *)arg1;
- (long long)sectionedGridLayout:(PUSectionedGridLayout *)arg1 maximumRowsForVisualSection:(long long)arg2;
- (void)sectionedGridLayout:(PUSectionedGridLayout *)arg1 didFinalizePrepareTransitionIsAppearing:(_Bool)arg2;
- (void)sectionedGridLayout:(PUSectionedGridLayout *)arg1 didPrepareTransitionIsAppearing:(_Bool)arg2;
@end

