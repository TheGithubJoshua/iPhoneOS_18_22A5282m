@class NSArray;

@interface REExportedArrayValue : REExportedValue {
    NSArray *_array;
}

- (id)initWithArray:(id)a0;
- (id)arrayValue;
- (void).cxx_destruct;
- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (unsigned long long)type;
- (unsigned long long)propertyCount;
- (id)exportedValueForKey:(id)a0;

@end
