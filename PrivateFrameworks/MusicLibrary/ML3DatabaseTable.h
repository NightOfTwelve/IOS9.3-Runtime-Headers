//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicLibrary/NSCopying-Protocol.h>
#import <MusicLibrary/NSMutableCopying-Protocol.h>

@class NSArray, NSString;

@interface ML3DatabaseTable : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_name;
    NSArray *_columns;
    NSArray *_foreignKeyConstraints;
}

@property(readonly, nonatomic) NSArray *foreignKeyConstraints; // @synthesize foreignKeyConstraints=_foreignKeyConstraints;
@property(readonly, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)_copyWithZone:(struct _NSZone *)arg1 concreteClass:(Class)arg2;
- (id)createTableSQLWithExistenceClause:(_Bool)arg1;
- (id)columnDefinitionsSQL;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

