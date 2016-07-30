//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class RWIProtocolCSSDomainEventDispatcher, RWIProtocolConsoleDomainEventDispatcher, RWIProtocolDOMDomainEventDispatcher, RWIProtocolDOMStorageDomainEventDispatcher, RWIProtocolNetworkDomainEventDispatcher, RWIProtocolPageDomainEventDispatcher;
@protocol RWIProtocolCSSDomainHandler, RWIProtocolDOMDomainHandler, RWIProtocolDOMStorageDomainHandler, RWIProtocolNetworkDomainHandler, RWIProtocolPageDomainHandler;

@interface RWIProtocolConfiguration : NSObject
{
    struct AugmentableInspectorController *_controller;
    id <RWIProtocolCSSDomainHandler> _cssHandler;
    RWIProtocolCSSDomainEventDispatcher *_cssEventDispatcher;
    RWIProtocolConsoleDomainEventDispatcher *_consoleEventDispatcher;
    id <RWIProtocolDOMDomainHandler> _domHandler;
    RWIProtocolDOMDomainEventDispatcher *_domEventDispatcher;
    id <RWIProtocolDOMStorageDomainHandler> _domStorageHandler;
    RWIProtocolDOMStorageDomainEventDispatcher *_domStorageEventDispatcher;
    id <RWIProtocolNetworkDomainHandler> _networkHandler;
    RWIProtocolNetworkDomainEventDispatcher *_networkEventDispatcher;
    id <RWIProtocolPageDomainHandler> _pageHandler;
    RWIProtocolPageDomainEventDispatcher *_pageEventDispatcher;
}

@property(readonly, nonatomic) RWIProtocolPageDomainEventDispatcher *pageEventDispatcher;
@property(retain, nonatomic, setter=setPageHandler:) id <RWIProtocolPageDomainHandler> pageHandler;
@property(readonly, nonatomic) RWIProtocolNetworkDomainEventDispatcher *networkEventDispatcher;
@property(retain, nonatomic, setter=setNetworkHandler:) id <RWIProtocolNetworkDomainHandler> networkHandler;
@property(readonly, nonatomic) RWIProtocolDOMStorageDomainEventDispatcher *domStorageEventDispatcher;
@property(retain, nonatomic, setter=setDOMStorageHandler:) id <RWIProtocolDOMStorageDomainHandler> domStorageHandler;
@property(readonly, nonatomic) RWIProtocolDOMDomainEventDispatcher *domEventDispatcher;
@property(retain, nonatomic, setter=setDOMHandler:) id <RWIProtocolDOMDomainHandler> domHandler;
@property(readonly, nonatomic) RWIProtocolConsoleDomainEventDispatcher *consoleEventDispatcher;
@property(readonly, nonatomic) RWIProtocolCSSDomainEventDispatcher *cssEventDispatcher;
@property(retain, nonatomic, setter=setCSSHandler:) id <RWIProtocolCSSDomainHandler> cssHandler;
- (void)dealloc;
- (id)initWithController:(struct AugmentableInspectorController *)arg1;

@end

