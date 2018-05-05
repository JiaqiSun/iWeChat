//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AccountBaseViewController.h"

#import "IUpdateProfileMgrExt-Protocol.h"
#import "MessageObserverDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "settingModifyEmailDelegate-Protocol.h"

@class MMTableViewInfo, NSString, UITextField;
@protocol settingModifyEmailDelegate;

@interface SettingModifyEmailViewController : AccountBaseViewController <IUpdateProfileMgrExt, MessageObserverDelegate, settingModifyEmailDelegate, UIAlertViewDelegate, UITextFieldDelegate>
{
    UITextField *m_textField;
    NSString *m_nsLastEmail;
    MMTableViewInfo *m_tableViewInfo;
    _Bool m_bEdit;
    _Bool m_bHasPwd;
    _Bool m_bSaveAndReturn;
    id <settingModifyEmailDelegate> m_delegate;
    _Bool m_bChanged;
    _Bool _m_bFromJSApi;
}

@property(nonatomic) _Bool m_bFromJSApi; // @synthesize m_bFromJSApi=_m_bFromJSApi;
@property(nonatomic) _Bool m_bSaveAndReturn; // @synthesize m_bSaveAndReturn;
@property(nonatomic) _Bool m_bHasPwd; // @synthesize m_bHasPwd;
@property(nonatomic) _Bool m_bEdit; // @synthesize m_bEdit;
@property(nonatomic) __weak id <settingModifyEmailDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *m_nsLastEmail; // @synthesize m_nsLastEmail;
@property(retain, nonatomic) UITextField *m_textField; // @synthesize m_textField;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnUnBindAccountOKConfirm;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)onProfileChange;
- (void)CgiFail:(id)arg1;
- (void)BindOk;
- (void)saveNewEmail;
- (void)sendValidateEmail;
- (void)onUnBindAccount;
- (void)makeEmailCell:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldTextDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)updateTableCell;
- (void)updateFooterView;
- (void)updateBarItem;
- (void)stopLoading;
- (void)startLoading;
- (void)onSave;
- (void)onEdit;
- (void)onDone;
- (void)onReturn;
- (void)onUnBind;
- (void)onUnBindConfirm;
- (_Bool)isExistEmail;
- (_Bool)isVerify;
- (_Bool)isEdit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

