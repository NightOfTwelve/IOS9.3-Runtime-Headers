//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNTask : NSObject
{
    _Bool _cancelled;
    NSString *_name;
}

+ (_Bool)isValidResult:(id)arg1;
@property(copy) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)run:(id *)arg1;
- (_Bool)cancel;
@property(readonly, getter=isCancelled) _Bool cancelled;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)init;

@end

