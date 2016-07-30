//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CPBitmapStore, NSCache;

@interface WeatherImageLoader : NSObject
{
    double _scale;
    CPBitmapStore *_store;
    NSCache *_conditionImagesCache;
}

+ (id)conditionImageBundle;
+ (id)conditionImageNameWithConditionIndex:(long long)arg1;
+ (id)cachedImageNamed:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)conditionImageNamed:(id)arg1;
+ (id)conditionImageWithConditionIndex:(long long)arg1;
+ (void)cacheImageIfNecessary:(id)arg1;
+ (id)sharedImageLoader;
@property(retain, nonatomic) NSCache *conditionImagesCache; // @synthesize conditionImagesCache=_conditionImagesCache;
@property(retain, nonatomic) CPBitmapStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (id)cachedImageForKey:(id)arg1;
- (id)init;

@end

