//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

#import <MediaPlayerUI/MPUExtrasCarouselCollectionViewLayout-Protocol.h>

@interface MPUExtrasCarouselCollectionViewFlowLayout : UICollectionViewFlowLayout <MPUExtrasCarouselCollectionViewLayout>
{
}

- (double)itemWidth;
- (unsigned long long)indexOfVisibleItem;
- (void)setIndexOfVisibleItem:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setIndexOfVisibleItem:(unsigned long long)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;

@end

