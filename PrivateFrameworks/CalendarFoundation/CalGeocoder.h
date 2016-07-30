//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MKLocalSearch, NSString;

@interface CalGeocoder : NSObject
{
    NSString *_locationString;
    CDUnknownBlockType _completionBlock;
    MKLocalSearch *_search;
}

+ (void)geocodeLocationString:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) MKLocalSearch *search; // @synthesize search=_search;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSString *locationString; // @synthesize locationString=_locationString;
- (void).cxx_destruct;
- (void)_callCompletionBlockWithResult:(id)arg1 error:(id)arg2;
- (void)cancel;
- (void)startGeocoding;
- (void)dealloc;
- (id)initWithLocationString:(id)arg1 andCompletionBlock:(CDUnknownBlockType)arg2;

@end

