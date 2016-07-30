//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSFilePresenterOperationRecord : NSObject
{
    NSString *operationDescription;
    long long state;
    id reactor;
}

+ (id)operationRecordWithDescription:(id)arg1;
@property id reactor; // @synthesize reactor;
@property(readonly) long long state; // @synthesize state;
@property(readonly) NSString *operationDescription; // @synthesize operationDescription;
- (id)description;
- (void)didEnd;
- (void)willEnd;
- (void)didBegin;
- (void)dealloc;

@end

