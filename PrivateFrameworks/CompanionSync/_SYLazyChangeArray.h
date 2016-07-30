//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@protocol SYChangeSerializer;

@interface _SYLazyChangeArray : NSArray
{
    NSArray *_source;
    NSArray *_types;
    id <SYChangeSerializer> _decoder;
    _Bool _isSYObjectDataArray;
    long long _compatibilityVersion;
}

@property(nonatomic) long long compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)initWithSYObjectDataArray:(id)arg1 typeArray:(id)arg2 decoder:(id)arg3;
- (id)initWithSourceArray:(id)arg1 decoder:(id)arg2;

@end

