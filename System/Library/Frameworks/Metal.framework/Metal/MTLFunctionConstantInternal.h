@class NSString;

@interface MTLFunctionConstantInternal : MTLFunctionConstant {
    NSString *_name;
    unsigned long long _type;
    unsigned long long _index;
    BOOL _required;
}

- (unsigned long long)index;
- (id)name;
- (id)description;
- (BOOL)required;
- (void)dealloc;
- (unsigned long long)type;
- (id)formattedDescription:(unsigned long long)a0;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 index:(unsigned long long)a2 required:(BOOL)a3;

@end
