//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MusicUpNextViewUpdate : NSObject
{
    unsigned long long _type;
    NSArray *_indexPaths;
}

@property(retain, nonatomic) NSArray *indexPaths; // @synthesize indexPaths=_indexPaths;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)_stringForUpdateType:(unsigned long long)arg1;
- (id)debugDescription;

@end

