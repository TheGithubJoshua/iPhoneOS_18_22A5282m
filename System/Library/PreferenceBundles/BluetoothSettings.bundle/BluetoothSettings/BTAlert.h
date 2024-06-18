@class UIAlertController, BTSDevice;
@protocol BTAlertDelegate;

@interface BTAlert : NSObject {
    id<BTAlertDelegate> _delegate;
    UIAlertController *_alert;
    BTSDevice *_device;
}

- (void)show;
- (id)initWithDevice:(id)a0;
- (BOOL)isiPhone;
- (void)dismiss;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)showAlertWithResult:(id)a0;
- (void)userActionResponseWithUnpairStatus:(BOOL)a0;

@end
