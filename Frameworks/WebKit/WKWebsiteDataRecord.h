//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSSet, NSString;

@interface WKWebsiteDataRecord : NSObject <WKObject>
{
    struct ObjectStorage<API::WebsiteDataRecord> _websiteDataRecord;
}

@property(readonly) struct Object *_apiObject;
@property(readonly, copy, nonatomic) NSSet *dataTypes;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

