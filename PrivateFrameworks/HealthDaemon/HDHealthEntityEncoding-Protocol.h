//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class HDEntityEncoder, HDSQLiteDatabase;
@protocol HDHealthDaemon;

@protocol HDHealthEntityEncoding
+ (HDEntityEncoder *)entityEncoderForHealthDaemon:(id <HDHealthDaemon>)arg1 database:(HDSQLiteDatabase *)arg2 purpose:(long long)arg3 authorizationFilter:(NSArray * (^)(NSArray *))arg4;
@end

