//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKRoadSignArtwork : NSObject
{
    struct __CTLine *_line;
    long long _orientation;
    _Bool _onRoute;
    float _contentScale;
    float _scale;
    struct CGSize _layoutSize;
}

- (Box_3fb92e00)localCollisionBounds;
- (Box_3fb92e00)localRenderBounds;
- (Matrix_8746f91e)offsetPixelForPixel:(Matrix_8746f91e)arg1;
- (id)image;
- (void)dealloc;
- (void)_updateLayoutSize;
- (id)initWithString:(id)arg1 orientation:(long long)arg2 contentScale:(double)arg3 scale:(double)arg4 onRoute:(_Bool)arg5;

@end

