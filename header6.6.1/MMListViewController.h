//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UINavigationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMTableView, NSArray, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol SessionDelegate;

@interface MMListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UINavigationControllerDelegate>
{
    NSMutableArray *m_arrAllMessageData;
    NSArray *m_newArriveList;
    MMTableView *m_tableView;
    id <SessionDelegate> m_delegate;
    UIView *m_noMsgView;
    UIImageView *m_imgView;
    UILabel *m_tipLabel;
    UILabel *m_label;
    UILabel *m_setLabel;
    unsigned int m_uiUnreadCount;
    UIButton *m_btn;
    UIButton *m_headerView;
}

@property(retain, nonatomic) NSArray *m_newArriveList; // @synthesize m_newArriveList;
@property(nonatomic) __weak id <SessionDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSMutableArray *m_arrAllMessageData; // @synthesize m_arrAllMessageData;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)isNewArrive:(id)arg1;
- (void)reloadNewArrList;
- (void)newArrListUpDataReloadView;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)deleteSession:(unsigned int)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initView;
- (void)openFunction;
- (void)goToInfoViewController:(id)arg1;
- (void)updateLabel;
- (void)initData;
- (void)updateViewControllerTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

