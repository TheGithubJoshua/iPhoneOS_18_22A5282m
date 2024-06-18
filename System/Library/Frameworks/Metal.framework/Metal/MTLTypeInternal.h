@interface MTLTypeInternal : MTLType {
    unsigned long long _dataType;
}

- (id)initWithDataType:(unsigned long long)a0;
- (unsigned long long)dataType;
- (id)description;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;

@end
