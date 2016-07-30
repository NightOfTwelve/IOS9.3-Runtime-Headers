//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Weather/MKLocalSearchCompleterDelegate-Protocol.h>

@class MKLocalSearchCompleter, NSError;
@protocol GEOMapServiceCompletionTicket;

@protocol MKLocalSearchCompleterDelegatePrivate <MKLocalSearchCompleterDelegate>

@optional
@property(retain, nonatomic) id <GEOMapServiceCompletionTicket> lastTicket;
- (void)completerDidAccessNetwork:(MKLocalSearchCompleter *)arg1;
- (void)completerWillAccessNetwork:(MKLocalSearchCompleter *)arg1;
- (void)completerDidFail:(MKLocalSearchCompleter *)arg1 error:(NSError *)arg2;
- (void)completerDidUpdateResults:(MKLocalSearchCompleter *)arg1 finished:(_Bool)arg2;
- (void)completerWillUpdateResults:(MKLocalSearchCompleter *)arg1;
@end

