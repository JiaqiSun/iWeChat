//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"

@class NSString, RichTextView, UIButton, UITextField;
@protocol WCPayFacingReceiveFixedAmountViewControllerDelegate;

@interface WCPayFacingReceiveFixedAmountViewController : WCPayBaseViewController <ILinkEventExt>
{
    id <WCPayFacingReceiveFixedAmountViewControllerDelegate> m_delegate;
    NSString *_remark;
    NSString *_moneyString;
    UITextField *_feeTextField;
    RichTextView *_commentTextView;
    UIButton *_footerBtn;
}

@property(retain, nonatomic) UIButton *footerBtn; // @synthesize footerBtn=_footerBtn;
@property(retain, nonatomic) RichTextView *commentTextView; // @synthesize commentTextView=_commentTextView;
@property(retain, nonatomic) UITextField *feeTextField; // @synthesize feeTextField=_feeTextField;
@property(retain, nonatomic) NSString *moneyString; // @synthesize moneyString=_moneyString;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
- (void).cxx_destruct;
- (void)remarkCancel:(id)arg1;
- (void)remarkConfirm:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)textFieldDidChange;
- (void)onNext;
- (void)FillSaveMoneyCancel;
- (void)initHeaderView;
- (void)reloadTableView;
- (void)initNavigationBar;
- (void)viewDidLoad;
- (void)setDelegate:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

