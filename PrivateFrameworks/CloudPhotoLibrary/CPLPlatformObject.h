//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CPLAbstractObject;

@interface CPLPlatformObject : NSObject
{
    id <CPLAbstractObject> _abstractObject;
}

@property(readonly, nonatomic) __weak id <CPLAbstractObject> abstractObject; // @synthesize abstractObject=_abstractObject;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAbstractObject:(id)arg1;
- (id)init;

@end

