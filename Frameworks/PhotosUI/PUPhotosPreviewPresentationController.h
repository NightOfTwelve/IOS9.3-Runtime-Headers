//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPreviewPresentationController.h>

@protocol PUPhotosPreviewPresentationControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotosPreviewPresentationController : UIPreviewPresentationController
{
    id <PUPhotosPreviewPresentationControllerDelegate> _photosPreviewingDelegate;
}

@property(nonatomic) __weak id <PUPhotosPreviewPresentationControllerDelegate> photosPreviewingDelegate; // @synthesize photosPreviewingDelegate=_photosPreviewingDelegate;
- (void).cxx_destruct;
- (void)_revealTransitionDidComplete:(_Bool)arg1;

@end

