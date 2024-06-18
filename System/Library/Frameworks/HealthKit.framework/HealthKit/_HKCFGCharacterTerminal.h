@class NSCharacterSet;

@interface _HKCFGCharacterTerminal : _HKCFGTerminal

@property (copy, nonatomic) NSCharacterSet *characterSet;

- (id)_label;
- (unsigned long long)_minimumLength;
- (BOOL)_scanValue:(id *)a0 withScanner:(id)a1;
- (void).cxx_destruct;

@end
