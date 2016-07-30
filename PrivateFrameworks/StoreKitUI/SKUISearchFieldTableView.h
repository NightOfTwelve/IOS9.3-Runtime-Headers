//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@class NSOperationQueue, SKUIClientContext, SKUILoadTrendingSearchPageOperation, SKUITrendingSearchPage, SKUITrendingSearchPageView;
@protocol SKUITrendingSearchPageViewDelegate;

@interface SKUISearchFieldTableView : UITableView
{
    SKUIClientContext *_clientContext;
    SKUILoadTrendingSearchPageOperation *_loadOperation;
    NSOperationQueue *_operationQueue;
    SKUITrendingSearchPage *_page;
    SKUITrendingSearchPageView *_pageView;
    id <SKUITrendingSearchPageViewDelegate> _trendingSearchDelegate;
    _Bool _trendingSearchesVisible;
}

@property(nonatomic) _Bool trendingSearchesVisible; // @synthesize trendingSearchesVisible=_trendingSearchesVisible;
@property(nonatomic) __weak id <SKUITrendingSearchPageViewDelegate> trendingSearchDelegate; // @synthesize trendingSearchDelegate=_trendingSearchDelegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_reloadView;
- (void)_setTrendingResponse:(id)arg1 error:(id)arg2;
- (void)_reloadData;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

