@class NSProgress, NSArray;

@interface TSUNSProgress : TSUProgress {
    NSProgress *_NSProgress;
    NSArray *_NSProgressObservers;
}

- (id)init;
- (BOOL)isIndeterminate;
- (void)setMessage:(id)a0;
- (id)message;
- (void).cxx_destruct;
- (double)maxValue;
- (double)value;
- (id)initForSubclass;
- (id)initWithNSProgress:(id)a0;

@end
