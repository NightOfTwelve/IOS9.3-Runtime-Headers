//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MusicStreamingItemDescriptor : NSObject
{
    long long _storeID;
    NSArray *_assetDescriptors;
}

@property(readonly, copy, nonatomic) NSArray *assetDescriptors; // @synthesize assetDescriptors=_assetDescriptors;
@property(readonly, nonatomic) long long storeID; // @synthesize storeID=_storeID;
- (void).cxx_destruct;
- (id)description;
- (id)_initWithResponseDictionary:(id)arg1;

@end

