//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUI/PUPhotoEditLayoutStaticAdaptable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _PUSliderPlayheadBaseView : UIView <PUPhotoEditLayoutStaticAdaptable>
{
    long long _layoutOrientation;
}

+ (Class)layerClass;
@property(readonly, nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
- (void)_updateBaseShape;
- (void)drawRect:(struct CGRect)arg1;
- (void)setupWithLayoutOrientation:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

