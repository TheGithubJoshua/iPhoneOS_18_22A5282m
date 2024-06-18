@class NSArray;

@interface WFWorkflowFolderPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

- (void).cxx_destruct;
- (id)possibleStates;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)accessoryImageForPossibleState:(id)a0;
- (id)accessoryIconForPossibleState:(id)a0;
- (Class)singleStateClass;

@end
