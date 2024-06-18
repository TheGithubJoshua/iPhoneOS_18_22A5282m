@class NSString, BKSHIDEventDeferringToken;

@interface _SBKeyboardFocusRedirection : NSObject {
    int _fromProcessIdentifier;
    int _toProcessIdentifier;
    NSString *_reason;
    BKSHIDEventDeferringToken *_fromToken;
    BKSHIDEventDeferringToken *_toToken;
}

- (void).cxx_destruct;
- (id)description;

@end
