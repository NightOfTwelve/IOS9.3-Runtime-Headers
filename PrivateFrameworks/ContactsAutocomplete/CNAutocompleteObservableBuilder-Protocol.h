//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsAutocomplete/NSObject-Protocol.h>

@class CNObservable;

@protocol CNAutocompleteObservableBuilder <NSObject>
- (CNObservable *)makeObservable;
- (void)setNetworkActivityDidStopHandler:(void (^)(void))arg1;
- (void)setNetworkActivityDidStartHandler:(void (^)(void))arg1;
- (void)setSupplementalResultsUseNetwork:(_Bool)arg1;
- (void)setNetworkActivityStartDelay:(double)arg1;
- (void)addCalendarServerObservable:(CNObservable *)arg1;
- (void)addDirectoryServerObservable:(CNObservable *)arg1;
- (void)addSupplementalObservable:(CNObservable *)arg1;
- (void)addDuetObservable:(CNObservable *)arg1 doOnTimeout:(void (^)(void))arg2;
- (void)addSuggestionsObservable:(CNObservable *)arg1;
- (void)addCoreRecentsObservable:(CNObservable *)arg1;
- (void)addContactsObservable:(CNObservable *)arg1;
@end

