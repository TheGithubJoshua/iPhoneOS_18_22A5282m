@class NSString;

@interface CSPowerAssertionAccessory : NSObject {
    unsigned int _assertionID;
    NSString *_name;
}

- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(id)a0 timeout:(double)a1;

@end
