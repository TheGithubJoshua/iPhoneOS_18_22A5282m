@class NSNumberFormatter;

@interface TSUNumberOrDateOrDurationFormatter : NSFormatter {
    NSNumberFormatter *mNumberFormatter;
}

- (id)init;
- (id)stringForObjectValue:(id)a0;
- (void)dealloc;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;

@end
