//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObservationTransformer.h>

__attribute__((visibility("hidden")))
@interface NSMapObservationTransformer : NSObservationTransformer
{
    id _block;
    int _tag;
}

- (void)dealloc;
- (void)_receiveBox:(id)arg1;
- (id)initWithBlock:(id)arg1 tag:(int)arg2;

@end

