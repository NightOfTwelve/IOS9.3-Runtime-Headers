//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSSet, PHAsset, PHAssetCollection, PUPhotoBrowserZoomTransition;

@protocol PUPhotoBrowserZoomTransitionDelegate <NSObject>
- (_Bool)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 getFrame:(struct CGRect *)arg2 contentMode:(long long *)arg3 cropInsets:(struct UIEdgeInsets *)arg4 forPhotoToken:(id)arg5 operation:(long long)arg6;
- (id)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 photoTokenForPhoto:(PHAsset *)arg2 inCollection:(PHAssetCollection *)arg3;

@optional
- (void)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 shouldHidePhotoTokens:(NSSet *)arg2;
- (void)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 setVisibility:(_Bool)arg2 forPhotoToken:(id)arg3;
- (void)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 didFinishAnimationForOperation:(long long)arg2;
- (void)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 willBeginAnimationForOperation:(long long)arg2;
- (void)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 didFinishForOperation:(long long)arg2 animated:(_Bool)arg3 interactive:(_Bool)arg4;
- (void)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 willBeginForOperation:(long long)arg2 animated:(_Bool)arg3 interactive:(_Bool)arg4;
- (_Bool)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 transitionImageForPhotoToken:(id)arg2 callback:(void (^)(UIImage *))arg3;
@end

