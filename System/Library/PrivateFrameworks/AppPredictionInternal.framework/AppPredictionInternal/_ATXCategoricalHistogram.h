@class NSDictionary;

@interface _ATXCategoricalHistogram : NSObject <NSSecureCoding> {
    unsigned int _count;
    unsigned int _capacity;
    struct { double x0; unsigned int x1; unsigned int x2; } *_entries;
    NSDictionary *_lastDates;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)enumerate:(id /* block */)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getLastDatesByCategoryId;

@end
