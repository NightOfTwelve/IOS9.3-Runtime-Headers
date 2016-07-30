//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPStorageRangeProvider : NSObject
{
    NSString *_identifier;
    struct _NSRange _range;
    NSObject *_object;
}

@property(readonly, nonatomic) NSObject *object; // @synthesize object=_object;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)nextRange;
- (unsigned long long)rangeEnd;
- (void)setRangeStart:(unsigned long long)arg1;
- (unsigned long long)rangeLength;
- (unsigned long long)rangeStart;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

