//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PUMediaProvider;

@interface PUContentTileProvider : NSObject
{
    PUMediaProvider *_mediaProvider;
}

@property(readonly, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
- (void).cxx_destruct;
- (id)tileControllerForAsset:(id)arg1 viewModel:(id)arg2 tilingView:(id)arg3;
- (void)registerTileControllerClassesWithTilingView:(id)arg1;
- (id)initWithMediaProvider:(id)arg1;
- (id)init;

@end

