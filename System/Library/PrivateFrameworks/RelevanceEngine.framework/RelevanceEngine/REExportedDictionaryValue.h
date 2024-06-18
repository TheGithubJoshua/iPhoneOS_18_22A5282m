@class NSDictionary;

@interface REExportedDictionaryValue : REExportedValue {
    NSDictionary *_dictionary;
}

- (id)initWithDictionary:(id)a0;
- (id)dictionaryValue;
- (void).cxx_destruct;
- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (unsigned long long)type;
- (unsigned long long)propertyCount;
- (id)exportedValueForKey:(id)a0;

@end
