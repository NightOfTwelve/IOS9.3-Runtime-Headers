//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKTransitDeparturesCell;

@protocol MKTransitDeparturesCellDelegate <NSObject>
- (void)timesTappedInDeparturesCell:(MKTransitDeparturesCell *)arg1;
- (void)dragDidEndInDeparturesCell:(MKTransitDeparturesCell *)arg1;
- (void)dragDidBeginInDeparturesCell:(MKTransitDeparturesCell *)arg1;
- (void)incidentButtonSelectedInDeparturesCell:(MKTransitDeparturesCell *)arg1;
@end

