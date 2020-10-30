// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------

#pragma once

#include "Sources.h"
#include "Types.h"
#include "Stmt.h"

namespace CppSharp { namespace CppParser { namespace AST {

class Expr;
class Declaration;
class Field;
class Method;
class Function;

enum class CastKind
{
    Dependent = 0,
    BitCast = 1,
    LValueBitCast = 2,
    LValueToRValue = 3,
    NoOp = 4,
    BaseToDerived = 5,
    DerivedToBase = 6,
    UncheckedDerivedToBase = 7,
    Dynamic = 8,
    ToUnion = 9,
    ArrayToPointerDecay = 10,
    FunctionToPointerDecay = 11,
    NullToPointer = 12,
    NullToMemberPointer = 13,
    BaseToDerivedMemberPointer = 14,
    DerivedToBaseMemberPointer = 15,
    MemberPointerToBoolean = 16,
    ReinterpretMemberPointer = 17,
    UserDefinedConversion = 18,
    ConstructorConversion = 19,
    IntegralToPointer = 20,
    PointerToIntegral = 21,
    PointerToBoolean = 22,
    ToVoid = 23,
    VectorSplat = 24,
    IntegralCast = 25,
    IntegralToBoolean = 26,
    IntegralToFloating = 27,
    FixedPointCast = 28,
    FixedPointToBoolean = 29,
    FloatingToIntegral = 30,
    FloatingToBoolean = 31,
    BooleanToSignedIntegral = 32,
    FloatingCast = 33,
    CPointerToObjCPointerCast = 34,
    BlockPointerToObjCPointerCast = 35,
    AnyPointerToBlockPointerCast = 36,
    ObjCObjectLValueCast = 37,
    FloatingRealToComplex = 38,
    FloatingComplexToReal = 39,
    FloatingComplexToBoolean = 40,
    FloatingComplexCast = 41,
    FloatingComplexToIntegralComplex = 42,
    IntegralRealToComplex = 43,
    IntegralComplexToReal = 44,
    IntegralComplexToBoolean = 45,
    IntegralComplexCast = 46,
    IntegralComplexToFloatingComplex = 47,
    ARCProduceObject = 48,
    ARCConsumeObject = 49,
    ARCReclaimReturnedObject = 50,
    ARCExtendBlockObject = 51,
    AtomicToNonAtomic = 52,
    NonAtomicToAtomic = 53,
    CopyAndAutoreleaseBlockObject = 54,
    BuiltinFnToFnPtr = 55,
    ZeroToOCLOpaqueType = 56,
    AddressSpaceConversion = 57,
    IntToOCLSampler = 58
};

enum class BinaryOperatorKind
{
    PtrMemD = 0,
    PtrMemI = 1,
    Mul = 2,
    Div = 3,
    Rem = 4,
    Add = 5,
    Sub = 6,
    Shl = 7,
    Shr = 8,
    Cmp = 9,
    LT = 10,
    GT = 11,
    LE = 12,
    GE = 13,
    EQ = 14,
    NE = 15,
    And = 16,
    Xor = 17,
    Or = 18,
    LAnd = 19,
    LOr = 20,
    Assign = 21,
    MulAssign = 22,
    DivAssign = 23,
    RemAssign = 24,
    AddAssign = 25,
    SubAssign = 26,
    ShlAssign = 27,
    ShrAssign = 28,
    AndAssign = 29,
    XorAssign = 30,
    OrAssign = 31,
    Comma = 32
};

enum class UnaryOperatorKind
{
    PostInc = 0,
    PostDec = 1,
    PreInc = 2,
    PreDec = 3,
    AddrOf = 4,
    Deref = 5,
    Plus = 6,
    Minus = 7,
    Not = 8,
    LNot = 9,
    Real = 10,
    Imag = 11,
    Extension = 12,
    Coawait = 13
};

enum class ObjCBridgeCastKind
{
    Bridge = 0,
    BridgeTransfer = 1,
    BridgeRetained = 2
};

enum class OverloadedOperatorKind
{
    None = 0,
    New = 1,
    Delete = 2,
    ArrayNew = 3,
    ArrayDelete = 4,
    Plus = 5,
    Minus = 6,
    Star = 7,
    Slash = 8,
    Percent = 9,
    Caret = 10,
    Amp = 11,
    Pipe = 12,
    Tilde = 13,
    Exclaim = 14,
    Equal = 15,
    Less = 16,
    Greater = 17,
    PlusEqual = 18,
    MinusEqual = 19,
    StarEqual = 20,
    SlashEqual = 21,
    PercentEqual = 22,
    CaretEqual = 23,
    AmpEqual = 24,
    PipeEqual = 25,
    LessLess = 26,
    GreaterGreater = 27,
    LessLessEqual = 28,
    GreaterGreaterEqual = 29,
    EqualEqual = 30,
    ExclaimEqual = 31,
    LessEqual = 32,
    GreaterEqual = 33,
    Spaceship = 34,
    AmpAmp = 35,
    PipePipe = 36,
    PlusPlus = 37,
    MinusMinus = 38,
    Comma = 39,
    ArrowStar = 40,
    Arrow = 41,
    Call = 42,
    Subscript = 43,
    Conditional = 44,
    Coawait = 45,

};

enum class UnaryExprOrTypeTrait
{
    SizeOf = 0,
    AlignOf = 1,
    VecStep = 2,
    OpenMPRequiredSimdAlign = 3,
    PreferredAlignOf = 4
};

class CS_API Expr : public Stmt
{
public:
    enum class LValueClassification
    {
        Valid = 0,
        NotObjectType = 1,
        IncompleteVoidType = 2,
        DuplicateVectorComponents = 3,
        InvalidExpression = 4,
        InvalidMessageExpression = 5,
        MemberFunction = 6,
        SubObjCPropertySetting = 7,
        ClassTemporary = 8,
        ArrayTemporary = 9
    };

    enum class isModifiableLvalueResult
    {
        Valid = 0,
        NotObjectType = 1,
        IncompleteVoidType = 2,
        DuplicateVectorComponents = 3,
        InvalidExpression = 4,
        LValueCast = 5,
        IncompleteType = 6,
        ConstQualified = 7,
        ConstQualifiedField = 8,
        ConstAddrSpace = 9,
        ArrayType = 10,
        NoSetterProperty = 11,
        MemberFunction = 12,
        SubObjCPropertySetting = 13,
        InvalidMessageExpression = 14,
        ClassTemporary = 15,
        ArrayTemporary = 16
    };

    enum class SideEffectsKind
    {
        NoSideEffects = 0,
        AllowUndefinedBehavior = 1,
        AllowSideEffects = 2
    };

    enum class ConstExprUsage
    {
        EvaluateForCodeGen = 0,
        EvaluateForMangling = 1
    };

    enum class NullPointerConstantKind
    {
        NotNull = 0,
        ZeroExpression = 1,
        ZeroLiteral = 2,
        CXX11_nullptr = 3,
        GNUNull = 4
    };

    enum class NullPointerConstantValueDependence
    {
        NeverValueDependent = 0,
        ValueDependentIsNull = 1,
        ValueDependentIsNotNull = 2
    };

    class CS_API Classification
    {
    public:
        enum class Kinds
        {
            LValue = 0,
            XValue = 1,
            Function = 2,
            Void = 3,
            AddressableVoid = 4,
            DuplicateVectorComponents = 5,
            MemberFunction = 6,
            SubObjCPropertySetting = 7,
            ClassTemporary = 8,
            ArrayTemporary = 9,
            ObjCMessageRValue = 10,
            PRValue = 11
        };

        enum class ModifiableType
        {
            Untested = 0,
            Modifiable = 1,
            RValue = 2,
            Function = 3,
            LValueCast = 4,
            NoSetterProperty = 5,
            ConstQualified = 6,
            ConstQualifiedField = 7,
            ConstAddrSpace = 8,
            ArrayType = 9,
            IncompleteType = 10
        };

        Classification();
        Kinds kind;
        ModifiableType modifiable;
        bool isLValue;
        bool isXValue;
        bool isGLValue;
        bool isPRValue;
        bool isRValue;
        bool isModifiable;
    };

    Expr();
    Expr(StmtClass klass);
    QualifiedType type;
    bool valueDependent;
    bool typeDependent;
    bool instantiationDependent;
    bool containsUnexpandedParameterPack;
    SourceLocation exprLoc;
    bool isLValue;
    bool isRValue;
    bool isXValue;
    bool isGLValue;
    bool isOrdinaryOrBitFieldObject;
    Field* sourceBitField;
    Declaration* referencedDeclOfCallee;
    bool hasPlaceholderType;
};

class CS_API FullExpr : public Expr
{
public:
    FullExpr();
    FullExpr(StmtClass klass);
    Expr* subExpr;
};

class CS_API ConstantExpr : public FullExpr
{
public:
    ConstantExpr();
};

class CS_API OpaqueValueExpr : public Expr
{
public:
    OpaqueValueExpr();
    bool isUnique;
    SourceLocation location;
    Expr* sourceExpr;
};

class CS_API DeclRefExpr : public Expr
{
public:
    DeclRefExpr();
    SourceLocation location;
    bool hadMultipleCandidates;
    bool hasQualifier;
    Declaration* foundDecl;
    bool hasTemplateKWAndArgsInfo;
    SourceLocation templateKeywordLoc;
    SourceLocation lAngleLoc;
    SourceLocation rAngleLoc;
    bool hasTemplateKeyword;
    bool hasExplicitTemplateArgs;
    unsigned int numTemplateArgs;
    bool refersToEnclosingVariableOrCapture;
};

class CS_API IntegerLiteral : public Expr
{
public:
    IntegerLiteral();
    SourceLocation location;
    unsigned long long value;
};

class CS_API FixedPointLiteral : public Expr
{
public:
    FixedPointLiteral();
    SourceLocation location;
    unsigned long long value;
};

class CS_API CharacterLiteral : public Expr
{
public:
    enum class CharacterKind
    {
        Ascii = 0,
        Wide = 1,
        UTF8 = 2,
        UTF16 = 3,
        UTF32 = 4
    };

    CharacterLiteral();
    SourceLocation location;
    CharacterKind kind;
    unsigned int value;
};

class CS_API FloatingLiteral : public Expr
{
public:
    FloatingLiteral();
    bool exact;
    SourceLocation location;
    double valueAsApproximateDouble;
};

class CS_API ImaginaryLiteral : public Expr
{
public:
    ImaginaryLiteral();
    Expr* subExpr;
};

class CS_API StringLiteral : public Expr
{
public:
    enum class StringKind
    {
        Ascii = 0,
        Wide = 1,
        UTF8 = 2,
        UTF16 = 3,
        UTF32 = 4
    };

    StringLiteral();
    std::string string;
    std::string bytes;
    unsigned int byteLength;
    unsigned int length;
    unsigned int charByteWidth;
    StringKind kind;
    bool isAscii;
    bool isWide;
    bool isUTF8;
    bool isUTF16;
    bool isUTF32;
    bool isPascal;
    bool containsNonAscii;
    bool containsNonAsciiOrNull;
    unsigned int numConcatenated;
};

class CS_API PredefinedExpr : public Expr
{
public:
    enum class IdentKind
    {
        Func = 0,
        Function = 1,
        LFunction = 2,
        FuncDName = 3,
        FuncSig = 4,
        LFuncSig = 5,
        PrettyFunction = 6,
        PrettyFunctionNoVirtual = 7
    };

    PredefinedExpr();
    SourceLocation location;
    IdentKind identKind;
};

class CS_API ParenExpr : public Expr
{
public:
    ParenExpr();
    Expr* subExpr;
    SourceLocation lParen;
    SourceLocation rParen;
};

class CS_API UnaryOperator : public Expr
{
public:
    UnaryOperator();
    UnaryOperatorKind opcode;
    Expr* subExpr;
    SourceLocation operatorLoc;
    bool canOverflow;
    bool isPrefix;
    bool isPostfix;
    bool isIncrementOp;
    bool isDecrementOp;
    bool isIncrementDecrementOp;
    bool isArithmeticOp;
    bool isFPContractableWithinStatement;
};

class CS_API OffsetOfExpr : public Expr
{
public:
    OffsetOfExpr();
    SourceLocation operatorLoc;
    SourceLocation rParenLoc;
    unsigned int numComponents;
    unsigned int numExpressions;
};

class CS_API UnaryExprOrTypeTraitExpr : public Expr
{
public:
    UnaryExprOrTypeTraitExpr();
    UnaryExprOrTypeTrait kind;
    SourceLocation operatorLoc;
    SourceLocation rParenLoc;
    bool isArgumentType;
    QualifiedType argumentType;
    Expr* argumentExpr;
    QualifiedType typeOfArgument;
};

class CS_API ArraySubscriptExpr : public Expr
{
public:
    ArraySubscriptExpr();
    Expr* lHS;
    Expr* rHS;
    SourceLocation rBracketLoc;
    Expr* base;
    Expr* idx;
};

class CS_API CallExpr : public Expr
{
public:
    CallExpr();
    CallExpr(StmtClass klass);
    VECTOR(Expr*, arguments)
    Expr* callee;
    SourceLocation rParenLoc;
    Declaration* calleeDecl;
    Function* directCallee;
    unsigned int numArgs;
    unsigned int numCommas;
    unsigned int builtinCallee;
    bool isCallToStdMove;
};

class CS_API MemberExpr : public Expr
{
public:
    MemberExpr();
    Expr* base;
    bool arrow;
    SourceLocation memberLoc;
    bool hadMultipleCandidates;
    bool hasQualifier;
    SourceLocation templateKeywordLoc;
    SourceLocation lAngleLoc;
    SourceLocation rAngleLoc;
    bool hasTemplateKeyword;
    bool hasExplicitTemplateArgs;
    unsigned int numTemplateArgs;
    SourceLocation operatorLoc;
    bool isImplicitAccess;
};

class CS_API CompoundLiteralExpr : public Expr
{
public:
    CompoundLiteralExpr();
    Expr* initializer;
    bool fileScope;
    SourceLocation lParenLoc;
};

class CS_API CastExpr : public Expr
{
public:
    CastExpr();
    CastExpr(StmtClass klass);
    CastKind castKind;
    Expr* subExpr;
    const char* castKindName;
    Expr* subExprAsWritten;
    Declaration* conversionFunction;
    bool path_empty;
    unsigned int path_size;
};

class CS_API ImplicitCastExpr : public CastExpr
{
public:
    enum class OnStack_t
    {
        OnStack = 0
    };

    ImplicitCastExpr();
    bool isPartOfExplicitCast;
};

class CS_API ExplicitCastExpr : public CastExpr
{
public:
    ExplicitCastExpr();
    ExplicitCastExpr(StmtClass klass);
    QualifiedType typeAsWritten;
};

class CS_API CStyleCastExpr : public ExplicitCastExpr
{
public:
    CStyleCastExpr();
    SourceLocation lParenLoc;
    SourceLocation rParenLoc;
};

class CS_API BinaryOperator : public Expr
{
public:
    BinaryOperator();
    BinaryOperator(StmtClass klass);
    SourceLocation operatorLoc;
    BinaryOperatorKind opcode;
    Expr* lHS;
    Expr* rHS;
    std::string opcodeStr;
    bool isPtrMemOp;
    bool isMultiplicativeOp;
    bool isAdditiveOp;
    bool isShiftOp;
    bool isBitwiseOp;
    bool isRelationalOp;
    bool isEqualityOp;
    bool isComparisonOp;
    bool isLogicalOp;
    bool isAssignmentOp;
    bool isCompoundAssignmentOp;
    bool isShiftAssignOp;
    bool isFPContractableWithinStatement;
    bool isFEnvAccessOn;
};

class CS_API CompoundAssignOperator : public BinaryOperator
{
public:
    CompoundAssignOperator();
    QualifiedType computationLHSType;
    QualifiedType computationResultType;
};

class CS_API AbstractConditionalOperator : public Expr
{
public:
    AbstractConditionalOperator();
    AbstractConditionalOperator(StmtClass klass);
    Expr* cond;
    Expr* trueExpr;
    Expr* falseExpr;
    SourceLocation questionLoc;
    SourceLocation colonLoc;
};

class CS_API ConditionalOperator : public AbstractConditionalOperator
{
public:
    ConditionalOperator();
    Expr* lHS;
    Expr* rHS;
};

class CS_API BinaryConditionalOperator : public AbstractConditionalOperator
{
public:
    BinaryConditionalOperator();
    Expr* common;
    OpaqueValueExpr* opaqueValue;
};

class CS_API AddrLabelExpr : public Expr
{
public:
    AddrLabelExpr();
    SourceLocation ampAmpLoc;
    SourceLocation labelLoc;
};

class CS_API StmtExpr : public Expr
{
public:
    StmtExpr();
    CompoundStmt* subStmt;
    SourceLocation lParenLoc;
    SourceLocation rParenLoc;
};

class CS_API ShuffleVectorExpr : public Expr
{
public:
    ShuffleVectorExpr();
    SourceLocation builtinLoc;
    SourceLocation rParenLoc;
    unsigned int numSubExprs;
};

class CS_API ConvertVectorExpr : public Expr
{
public:
    ConvertVectorExpr();
    Expr* srcExpr;
    SourceLocation builtinLoc;
    SourceLocation rParenLoc;
};

class CS_API ChooseExpr : public Expr
{
public:
    ChooseExpr();
    bool isConditionTrue;
    Expr* cond;
    Expr* lHS;
    Expr* rHS;
    SourceLocation builtinLoc;
    SourceLocation rParenLoc;
    bool isConditionDependent;
    Expr* chosenSubExpr;
};

class CS_API GNUNullExpr : public Expr
{
public:
    GNUNullExpr();
    SourceLocation tokenLocation;
};

class CS_API VAArgExpr : public Expr
{
public:
    VAArgExpr();
    Expr* subExpr;
    bool isMicrosoftABI;
    SourceLocation builtinLoc;
    SourceLocation rParenLoc;
};

class CS_API InitListExpr : public Expr
{
public:
    InitListExpr();
    Expr* arrayFiller;
    SourceLocation lBraceLoc;
    SourceLocation rBraceLoc;
    InitListExpr* syntacticForm;
    unsigned int numInits;
    bool hasArrayFiller;
    bool isExplicit;
    bool isStringLiteralInit;
    bool isTransparent;
    bool isSemanticForm;
    InitListExpr* semanticForm;
    bool isSyntacticForm;
};

class CS_API DesignatedInitExpr : public Expr
{
public:
    class CS_API Designator
    {
    public:
        Designator();
        Field* field;
        bool isFieldDesignator;
        bool isArrayDesignator;
        bool isArrayRangeDesignator;
        SourceLocation dotLoc;
        SourceLocation fieldLoc;
        SourceLocation lBracketLoc;
        SourceLocation rBracketLoc;
        SourceLocation ellipsisLoc;
        unsigned int firstExprIndex;
        SourceRange sourceRange;
    };

    class CS_API FieldDesignator
    {
    public:
        FieldDesignator();
    };

    class CS_API ArrayOrRangeDesignator
    {
    public:
        ArrayOrRangeDesignator();
    };

    DesignatedInitExpr();
    SourceLocation equalOrColonLoc;
    Expr* init;
    unsigned int size;
    bool usesGNUSyntax;
    unsigned int numSubExprs;
    SourceRange designatorsSourceRange;
};

class CS_API NoInitExpr : public Expr
{
public:
    NoInitExpr();
};

class CS_API DesignatedInitUpdateExpr : public Expr
{
public:
    DesignatedInitUpdateExpr();
    Expr* base;
    InitListExpr* updater;
};

class CS_API ArrayInitLoopExpr : public Expr
{
public:
    ArrayInitLoopExpr();
    OpaqueValueExpr* commonExpr;
    Expr* subExpr;
};

class CS_API ArrayInitIndexExpr : public Expr
{
public:
    ArrayInitIndexExpr();
};

class CS_API ImplicitValueInitExpr : public Expr
{
public:
    ImplicitValueInitExpr();
};

class CS_API ParenListExpr : public Expr
{
public:
    ParenListExpr();
    unsigned int numExprs;
    SourceLocation lParenLoc;
    SourceLocation rParenLoc;
};

class CS_API GenericSelectionExpr : public Expr
{
public:
    GenericSelectionExpr();
    unsigned int numAssocs;
    SourceLocation genericLoc;
    SourceLocation defaultLoc;
    SourceLocation rParenLoc;
    Expr* controllingExpr;
    bool isResultDependent;
    unsigned int resultIndex;
    Expr* resultExpr;
};

class CS_API ExtVectorElementExpr : public Expr
{
public:
    ExtVectorElementExpr();
    Expr* base;
    SourceLocation accessorLoc;
    unsigned int numElements;
    bool containsDuplicateElements;
    bool isArrow;
};

class CS_API BlockExpr : public Expr
{
public:
    BlockExpr();
    SourceLocation caretLocation;
    Stmt* body;
};

class CS_API AsTypeExpr : public Expr
{
public:
    AsTypeExpr();
    Expr* srcExpr;
    SourceLocation builtinLoc;
    SourceLocation rParenLoc;
};

class CS_API PseudoObjectExpr : public Expr
{
public:
    PseudoObjectExpr();
    Expr* syntacticForm;
    unsigned int resultExprIndex;
    Expr* resultExpr;
    unsigned int numSemanticExprs;
};

class CS_API AtomicExpr : public Expr
{
public:
    enum class AtomicOp
    {
        C11AtomicInit = 0,
        C11AtomicLoad = 1,
        C11AtomicStore = 2,
        C11AtomicExchange = 3,
        C11AtomicCompareExchangeStrong = 4,
        C11AtomicCompareExchangeWeak = 5,
        C11AtomicFetchAdd = 6,
        C11AtomicFetchSub = 7,
        C11AtomicFetchAnd = 8,
        C11AtomicFetchOr = 9,
        C11AtomicFetchXor = 10,
        AtomicLoad = 11,
        AtomicLoadN = 12,
        AtomicStore = 13,
        AtomicStoreN = 14,
        AtomicExchange = 15,
        AtomicExchangeN = 16,
        AtomicCompareExchange = 17,
        AtomicCompareExchangeN = 18,
        AtomicFetchAdd = 19,
        AtomicFetchSub = 20,
        AtomicFetchAnd = 21,
        AtomicFetchOr = 22,
        AtomicFetchXor = 23,
        AtomicFetchNand = 24,
        AtomicAddFetch = 25,
        AtomicSubFetch = 26,
        AtomicAndFetch = 27,
        AtomicOrFetch = 28,
        AtomicXorFetch = 29,
        AtomicNandFetch = 30,
        OpenclAtomicInit = 31,
        OpenclAtomicLoad = 32,
        OpenclAtomicStore = 33,
        OpenclAtomicExchange = 34,
        OpenclAtomicCompareExchangeStrong = 35,
        OpenclAtomicCompareExchangeWeak = 36,
        OpenclAtomicFetchAdd = 37,
        OpenclAtomicFetchSub = 38,
        OpenclAtomicFetchAnd = 39,
        OpenclAtomicFetchOr = 40,
        OpenclAtomicFetchXor = 41,
        OpenclAtomicFetchMin = 42,
        OpenclAtomicFetchMax = 43,
        AtomicFetchMin = 44,
        AtomicFetchMax = 45,

    };

    AtomicExpr();
    Expr* ptr;
    Expr* order;
    Expr* scope;
    Expr* val1;
    Expr* orderFail;
    Expr* val2;
    Expr* weak;
    QualifiedType valueType;
    AtomicOp op;
    unsigned int numSubExprs;
    bool isVolatile;
    bool isCmpXChg;
    bool isOpenCL;
    SourceLocation builtinLoc;
    SourceLocation rParenLoc;
};

class CS_API TypoExpr : public Expr
{
public:
    TypoExpr();
};

class CS_API CXXOperatorCallExpr : public CallExpr
{
public:
    CXXOperatorCallExpr();
    OverloadedOperatorKind _operator;
    bool isAssignmentOp;
    bool isInfixBinaryOp;
    SourceLocation operatorLoc;
};

class CS_API CXXMemberCallExpr : public CallExpr
{
public:
    CXXMemberCallExpr();
    Expr* implicitObjectArgument;
    Method* methodDecl;
};

class CS_API CUDAKernelCallExpr : public CallExpr
{
public:
    CUDAKernelCallExpr();
    CallExpr* config;
};

class CS_API CXXNamedCastExpr : public ExplicitCastExpr
{
public:
    CXXNamedCastExpr();
    CXXNamedCastExpr(StmtClass klass);
    const char* castName;
    SourceLocation operatorLoc;
    SourceLocation rParenLoc;
    SourceRange angleBrackets;
};

class CS_API CXXStaticCastExpr : public CXXNamedCastExpr
{
public:
    CXXStaticCastExpr();
};

class CS_API CXXDynamicCastExpr : public CXXNamedCastExpr
{
public:
    CXXDynamicCastExpr();
    bool isAlwaysNull;
};

class CS_API CXXReinterpretCastExpr : public CXXNamedCastExpr
{
public:
    CXXReinterpretCastExpr();
};

class CS_API CXXConstCastExpr : public CXXNamedCastExpr
{
public:
    CXXConstCastExpr();
};

class CS_API UserDefinedLiteral : public CallExpr
{
public:
    enum class LiteralOperatorKind
    {
        Raw = 0,
        Template = 1,
        Integer = 2,
        Floating = 3,
        String = 4,
        Character = 5
    };

    UserDefinedLiteral();
    LiteralOperatorKind literalOperatorKind;
    Expr* cookedLiteral;
    SourceLocation uDSuffixLoc;
};

class CS_API CXXBoolLiteralExpr : public Expr
{
public:
    CXXBoolLiteralExpr();
    bool value;
    SourceLocation location;
};

class CS_API CXXNullPtrLiteralExpr : public Expr
{
public:
    CXXNullPtrLiteralExpr();
    SourceLocation location;
};

class CS_API CXXStdInitializerListExpr : public Expr
{
public:
    CXXStdInitializerListExpr();
    Expr* subExpr;
};

class CS_API CXXTypeidExpr : public Expr
{
public:
    CXXTypeidExpr();
    Expr* exprOperand;
    bool isPotentiallyEvaluated;
    bool isTypeOperand;
};

class CS_API MSPropertyRefExpr : public Expr
{
public:
    MSPropertyRefExpr();
    bool isImplicitAccess;
    Expr* baseExpr;
    bool isArrow;
    SourceLocation memberLoc;
};

class CS_API MSPropertySubscriptExpr : public Expr
{
public:
    MSPropertySubscriptExpr();
    SourceLocation rBracketLoc;
    Expr* base;
    Expr* idx;
};

class CS_API CXXUuidofExpr : public Expr
{
public:
    CXXUuidofExpr();
    Expr* exprOperand;
    std::string uuidStr;
    bool isTypeOperand;
};

class CS_API CXXThisExpr : public Expr
{
public:
    CXXThisExpr();
    SourceLocation location;
    bool implicit;
};

class CS_API CXXThrowExpr : public Expr
{
public:
    CXXThrowExpr();
    Expr* subExpr;
    SourceLocation throwLoc;
    bool isThrownVariableInScope;
};

class CS_API CXXDefaultArgExpr : public Expr
{
public:
    CXXDefaultArgExpr();
    Expr* expr;
    SourceLocation usedLocation;
};

class CS_API CXXDefaultInitExpr : public Expr
{
public:
    CXXDefaultInitExpr();
    Field* field;
    Expr* expr;
};

class CS_API CXXBindTemporaryExpr : public Expr
{
public:
    CXXBindTemporaryExpr();
    Expr* subExpr;
};

class CS_API CXXConstructExpr : public Expr
{
public:
    enum class ConstructionKind
    {
        Complete = 0,
        NonVirtualBase = 1,
        VirtualBase = 2,
        Delegating = 3
    };

    CXXConstructExpr();
    CXXConstructExpr(StmtClass klass);
    VECTOR(Expr*, arguments)
    SourceLocation location;
    bool elidable;
    bool hadMultipleCandidates;
    bool listInitialization;
    bool stdInitListInitialization;
    bool requiresZeroInitialization;
    SourceRange parenOrBraceRange;
    unsigned int numArgs;
};

class CS_API CXXInheritedCtorInitExpr : public Expr
{
public:
    CXXInheritedCtorInitExpr();
    bool constructsVBase;
    bool inheritedFromVBase;
    SourceLocation location;
};

class CS_API CXXFunctionalCastExpr : public ExplicitCastExpr
{
public:
    CXXFunctionalCastExpr();
    SourceLocation lParenLoc;
    SourceLocation rParenLoc;
    bool isListInitialization;
};

class CS_API CXXTemporaryObjectExpr : public CXXConstructExpr
{
public:
    CXXTemporaryObjectExpr();
};

class CS_API LambdaExpr : public Expr
{
public:
    LambdaExpr();
    VECTOR(Expr*, capture_inits)
    SourceLocation captureDefaultLoc;
    unsigned int capture_size;
    SourceRange introducerRange;
    Method* callOperator;
    bool isGenericLambda;
    CompoundStmt* body;
    bool isMutable;
    bool hasExplicitParameters;
    bool hasExplicitResultType;
};

class CS_API CXXScalarValueInitExpr : public Expr
{
public:
    CXXScalarValueInitExpr();
    SourceLocation rParenLoc;
};

class CS_API CXXNewExpr : public Expr
{
public:
    enum class InitializationStyle
    {
        NoInit = 0,
        CallInit = 1,
        ListInit = 2
    };

    CXXNewExpr();
    VECTOR(Expr*, placement_arguments)
    Function* operatorNew;
    Function* operatorDelete;
    QualifiedType allocatedType;
    bool isArray;
    Expr* arraySize;
    unsigned int numPlacementArgs;
    bool isParenTypeId;
    SourceRange typeIdParens;
    bool isGlobalNew;
    bool hasInitializer;
    InitializationStyle initializationStyle;
    Expr* initializer;
    CXXConstructExpr* constructExpr;
    SourceRange directInitRange;
};

class CS_API CXXDeleteExpr : public Expr
{
public:
    CXXDeleteExpr();
    bool isGlobalDelete;
    bool isArrayForm;
    bool isArrayFormAsWritten;
    Function* operatorDelete;
    Expr* argument;
    QualifiedType destroyedType;
};

class CS_API CXXPseudoDestructorExpr : public Expr
{
public:
    CXXPseudoDestructorExpr();
    Expr* base;
    bool hasQualifier;
    bool isArrow;
    SourceLocation operatorLoc;
    SourceLocation colonColonLoc;
    SourceLocation tildeLoc;
    QualifiedType destroyedType;
    SourceLocation destroyedTypeLoc;
};

class CS_API TypeTraitExpr : public Expr
{
public:
    TypeTraitExpr();
    bool value;
    unsigned int numArgs;
};

class CS_API ArrayTypeTraitExpr : public Expr
{
public:
    ArrayTypeTraitExpr();
    QualifiedType queriedType;
    uint64_t value;
    Expr* dimensionExpression;
};

class CS_API ExpressionTraitExpr : public Expr
{
public:
    ExpressionTraitExpr();
    Expr* queriedExpression;
    bool value;
};

class CS_API OverloadExpr : public Expr
{
public:
    class CS_API FindResult
    {
    public:
        FindResult();
    };

    OverloadExpr();
    OverloadExpr(StmtClass klass);
    unsigned int numDecls;
    SourceLocation nameLoc;
    SourceLocation templateKeywordLoc;
    SourceLocation lAngleLoc;
    SourceLocation rAngleLoc;
    bool hasTemplateKeyword;
    bool hasExplicitTemplateArgs;
    unsigned int numTemplateArgs;
};

class CS_API UnresolvedLookupExpr : public OverloadExpr
{
public:
    UnresolvedLookupExpr();
    bool requiresADL;
    bool isOverloaded;
};

class CS_API DependentScopeDeclRefExpr : public Expr
{
public:
    DependentScopeDeclRefExpr();
    SourceLocation location;
    SourceLocation templateKeywordLoc;
    SourceLocation lAngleLoc;
    SourceLocation rAngleLoc;
    bool hasTemplateKeyword;
    bool hasExplicitTemplateArgs;
    unsigned int numTemplateArgs;
};

class CS_API ExprWithCleanups : public FullExpr
{
public:
    ExprWithCleanups();
    unsigned int numObjects;
    bool cleanupsHaveSideEffects;
};

class CS_API CXXUnresolvedConstructExpr : public Expr
{
public:
    CXXUnresolvedConstructExpr();
    VECTOR(Expr*, arguments)
    SourceLocation lParenLoc;
    SourceLocation rParenLoc;
    QualifiedType typeAsWritten;
    bool isListInitialization;
    unsigned int arg_size;
};

class CS_API CXXDependentScopeMemberExpr : public Expr
{
public:
    CXXDependentScopeMemberExpr();
    bool isImplicitAccess;
    Expr* base;
    QualifiedType baseType;
    bool isArrow;
    SourceLocation operatorLoc;
    Declaration* firstQualifierFoundInScope;
    SourceLocation memberLoc;
    SourceLocation templateKeywordLoc;
    SourceLocation lAngleLoc;
    SourceLocation rAngleLoc;
    bool hasTemplateKeyword;
    bool hasExplicitTemplateArgs;
    unsigned int numTemplateArgs;
};

class CS_API UnresolvedMemberExpr : public OverloadExpr
{
public:
    UnresolvedMemberExpr();
    bool isImplicitAccess;
    Expr* base;
    QualifiedType baseType;
    bool hasUnresolvedUsing;
    bool isArrow;
    SourceLocation operatorLoc;
    SourceLocation memberLoc;
};

class CS_API CXXNoexceptExpr : public Expr
{
public:
    CXXNoexceptExpr();
    Expr* operand;
    bool value;
};

class CS_API PackExpansionExpr : public Expr
{
public:
    PackExpansionExpr();
    Expr* pattern;
    SourceLocation ellipsisLoc;
};

class CS_API SizeOfPackExpr : public Expr
{
public:
    SizeOfPackExpr();
    SourceLocation operatorLoc;
    SourceLocation packLoc;
    SourceLocation rParenLoc;
    Declaration* pack;
    unsigned int packLength;
    bool isPartiallySubstituted;
};

class CS_API SubstNonTypeTemplateParmExpr : public Expr
{
public:
    SubstNonTypeTemplateParmExpr();
    SourceLocation nameLoc;
    Expr* replacement;
};

class CS_API SubstNonTypeTemplateParmPackExpr : public Expr
{
public:
    SubstNonTypeTemplateParmPackExpr();
    SourceLocation parameterPackLocation;
    TemplateArgument argumentPack;
};

class CS_API FunctionParmPackExpr : public Expr
{
public:
    FunctionParmPackExpr();
    SourceLocation parameterPackLocation;
    unsigned int numExpansions;
};

class CS_API MaterializeTemporaryExpr : public Expr
{
public:
    class CS_API ExtraState
    {
    public:
        ExtraState();
    };

    MaterializeTemporaryExpr();
    Stmt* temporary;
    Expr* TemporaryExpr;
    unsigned int manglingNumber;
    bool isBoundToLvalueReference;
};

class CS_API CXXFoldExpr : public Expr
{
public:
    CXXFoldExpr();
    Expr* lHS;
    Expr* rHS;
    bool isRightFold;
    bool isLeftFold;
    Expr* pattern;
    Expr* init;
    SourceLocation ellipsisLoc;
    BinaryOperatorKind _operator;
};

class CS_API CoroutineSuspendExpr : public Expr
{
public:
    enum class SubExpr
    {
        Common = 0,
        Ready = 1,
        Suspend = 2,
        Resume = 3,
        Count = 4
    };

    CoroutineSuspendExpr();
    CoroutineSuspendExpr(StmtClass klass);
    SourceLocation keywordLoc;
    Expr* commonExpr;
    OpaqueValueExpr* opaqueValue;
    Expr* readyExpr;
    Expr* suspendExpr;
    Expr* resumeExpr;
};

class CS_API CoawaitExpr : public CoroutineSuspendExpr
{
public:
    CoawaitExpr();
    bool isImplicit;
    Expr* operand;
};

class CS_API DependentCoawaitExpr : public Expr
{
public:
    DependentCoawaitExpr();
    Expr* operand;
    UnresolvedLookupExpr* operatorCoawaitLookup;
    SourceLocation keywordLoc;
};

class CS_API CoyieldExpr : public CoroutineSuspendExpr
{
public:
    CoyieldExpr();
    Expr* operand;
};

} } }
