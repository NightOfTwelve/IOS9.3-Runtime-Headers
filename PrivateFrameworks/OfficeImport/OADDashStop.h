//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface OADDashStop : NSObject <NSCopying>
{
    float mDash;
    float mSpace;
}

+ (void)addStopWithDash:(float)arg1 space:(float)arg2 toArray:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (float)space;
- (float)dash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDash:(float)arg1 space:(float)arg2;

@end

