//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface HDSQLiteDatabaseIndexSchema : NSObject
{
    _Bool _isUnique;
    NSString *_name;
    NSArray *_columns;
}

@property(nonatomic) _Bool isUnique; // @synthesize isUnique=_isUnique;
@property(retain, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

