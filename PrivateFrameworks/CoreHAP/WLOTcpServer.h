//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, WLOTcpServerDelegate;

@interface WLOTcpServer : NSObject
{
    int _port;
    int _sockd;
    id <WLOTcpServerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_listenQueue;
}

@property(nonatomic) int sockd; // @synthesize sockd=_sockd;
@property(nonatomic) int port; // @synthesize port=_port;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *listenQueue; // @synthesize listenQueue=_listenQueue;
@property(nonatomic) __weak id <WLOTcpServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_listen:(int)arg1;
- (void)dealloc;
- (void)listen;
- (id)initWithPort:(int)arg1;

@end

