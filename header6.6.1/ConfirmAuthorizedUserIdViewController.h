//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class MMWebImageView, NSMutableArray, UIButton, UILabel, UIScrollView, UIView, UserIdAuthorizePageInfo;
@protocol ConfirmAuthorizedUserIdDelegate;

@interface ConfirmAuthorizedUserIdViewController : MMUIViewController
{
    id <ConfirmAuthorizedUserIdDelegate> _delegate;
    UserIdAuthorizePageInfo *_pageInfo;
    UIScrollView *_scrollView;
    MMWebImageView *_headerView;
    UILabel *_descLabel;
    UIView *_separateLine;
    NSMutableArray *_userIdTitleLabels;
    NSMutableArray *_userIdContentLabels;
    UILabel *_usageLabel;
    UIButton *_confirmButton;
    UILabel *_protocolJumpTitleLabel;
    UIButton *_protocolJumpButton;
    NSMutableArray *_jumpButtons;
    UIView *_buttonContainerView;
}

@property(retain, nonatomic) UIView *buttonContainerView; // @synthesize buttonContainerView=_buttonContainerView;
@property(retain, nonatomic) NSMutableArray *jumpButtons; // @synthesize jumpButtons=_jumpButtons;
@property(retain, nonatomic) UIButton *protocolJumpButton; // @synthesize protocolJumpButton=_protocolJumpButton;
@property(retain, nonatomic) UILabel *protocolJumpTitleLabel; // @synthesize protocolJumpTitleLabel=_protocolJumpTitleLabel;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *usageLabel; // @synthesize usageLabel=_usageLabel;
@property(retain, nonatomic) NSMutableArray *userIdContentLabels; // @synthesize userIdContentLabels=_userIdContentLabels;
@property(retain, nonatomic) NSMutableArray *userIdTitleLabels; // @synthesize userIdTitleLabels=_userIdTitleLabels;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMWebImageView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UserIdAuthorizePageInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(nonatomic) __weak id <ConfirmAuthorizedUserIdDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onProtocolJumpButton:(id)arg1;
- (void)onJumpButton:(id)arg1;
- (void)onConfirmButton:(id)arg1;
- (void)fillPageInfo;
- (void)initSubViews;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)onReturn;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithPageInfo:(id)arg1;

@end

