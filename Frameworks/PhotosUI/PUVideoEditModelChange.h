//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUViewModelChange.h>

__attribute__((visibility("hidden")))
@interface PUVideoEditModelChange : PUViewModelChange
{
    _Bool _videoDurationChanged;
    _Bool _videoTrimRegionChanged;
    _Bool _videoSizeChanged;
    _Bool _videoBuilderChanged;
}

- (void)_setVideoBuilderChanged:(_Bool)arg1;
@property(nonatomic) _Bool videoBuilderChanged; // @synthesize videoBuilderChanged=_videoBuilderChanged;
- (void)_setVideoSizeChanged:(_Bool)arg1;
@property(nonatomic) _Bool videoSizeChanged; // @synthesize videoSizeChanged=_videoSizeChanged;
- (void)_setVideoTrimRegionChanged:(_Bool)arg1;
@property(nonatomic) _Bool videoTrimRegionChanged; // @synthesize videoTrimRegionChanged=_videoTrimRegionChanged;
- (void)_setVideoDurationChanged:(_Bool)arg1;
@property(nonatomic) _Bool videoDurationChanged; // @synthesize videoDurationChanged=_videoDurationChanged;
- (_Bool)hasChanges;

@end

