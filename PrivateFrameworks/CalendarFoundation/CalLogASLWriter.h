//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarFoundation/CalLogWriter.h>

@interface CalLogASLWriter : CalLogWriter
{
    struct __asl_object_s *log_client;
}

+ (id)aslNamespaces;
- (void)write:(id)arg1;
- (char *)aslLevelForLogLevel:(int)arg1;
- (void)_configureASLNamespaces;
- (void)_configureASLClient;
- (void)dealloc;
- (id)initWithParameters:(id)arg1;

@end

