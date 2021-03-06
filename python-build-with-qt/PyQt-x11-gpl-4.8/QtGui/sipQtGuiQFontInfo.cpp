/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:19 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qfontinfo.sip"
#include <qfontinfo.h>
#line 39 "sipQtGuiQFontInfo.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qfont.sip"
#include <qfont.h>
#line 43 "sipQtGuiQFontInfo.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 46 "sipQtGuiQFontInfo.cpp"


extern "C" {static PyObject *meth_QFontInfo_family(PyObject *, PyObject *);}
static PyObject *meth_QFontInfo_family(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontInfo, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->family());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontInfo, sipName_family, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontInfo_pixelSize(PyObject *, PyObject *);}
static PyObject *meth_QFontInfo_pixelSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontInfo, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->pixelSize();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontInfo, sipName_pixelSize, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontInfo_pointSize(PyObject *, PyObject *);}
static PyObject *meth_QFontInfo_pointSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontInfo, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->pointSize();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontInfo, sipName_pointSize, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontInfo_pointSizeF(PyObject *, PyObject *);}
static PyObject *meth_QFontInfo_pointSizeF(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontInfo, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->pointSizeF();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontInfo, sipName_pointSizeF, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontInfo_italic(PyObject *, PyObject *);}
static PyObject *meth_QFontInfo_italic(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontInfo, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->italic();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontInfo, sipName_italic, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontInfo_style(PyObject *, PyObject *);}
static PyObject *meth_QFontInfo_style(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontInfo, &sipCpp))
        {
            QFont::Style sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->style();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QFont_Style);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontInfo, sipName_style, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontInfo_weight(PyObject *, PyObject *);}
static PyObject *meth_QFontInfo_weight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontInfo, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->weight();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontInfo, sipName_weight, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontInfo_bold(PyObject *, PyObject *);}
static PyObject *meth_QFontInfo_bold(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontInfo, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->bold();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontInfo, sipName_bold, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontInfo_fixedPitch(PyObject *, PyObject *);}
static PyObject *meth_QFontInfo_fixedPitch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontInfo, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->fixedPitch();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontInfo, sipName_fixedPitch, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontInfo_styleHint(PyObject *, PyObject *);}
static PyObject *meth_QFontInfo_styleHint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontInfo, &sipCpp))
        {
            QFont::StyleHint sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->styleHint();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QFont_StyleHint);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontInfo, sipName_styleHint, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontInfo_rawMode(PyObject *, PyObject *);}
static PyObject *meth_QFontInfo_rawMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontInfo, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->rawMode();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontInfo, sipName_rawMode, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontInfo_exactMatch(PyObject *, PyObject *);}
static PyObject *meth_QFontInfo_exactMatch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontInfo, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->exactMatch();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontInfo, sipName_exactMatch, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QFontInfo(void *, const sipTypeDef *);}
static void *cast_QFontInfo(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QFontInfo)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QFontInfo(void *, int);}
static void release_QFontInfo(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QFontInfo *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QFontInfo(sipSimpleWrapper *);}
static void dealloc_QFontInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QFontInfo(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QFontInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QFontInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QFontInfo *sipCpp = 0;

    {
        const QFont * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QFont, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QFontInfo(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QFontInfo * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QFontInfo, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QFontInfo(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QFontInfo[] = {
    {SIP_MLNAME_CAST(sipName_bold), meth_QFontInfo_bold, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_exactMatch), meth_QFontInfo_exactMatch, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_family), meth_QFontInfo_family, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_fixedPitch), meth_QFontInfo_fixedPitch, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_italic), meth_QFontInfo_italic, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_pixelSize), meth_QFontInfo_pixelSize, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_pointSize), meth_QFontInfo_pointSize, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_pointSizeF), meth_QFontInfo_pointSizeF, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_rawMode), meth_QFontInfo_rawMode, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_style), meth_QFontInfo_style, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_styleHint), meth_QFontInfo_styleHint, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_weight), meth_QFontInfo_weight, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QFontInfo = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QFontInfo,
        {0}
    },
    {
        sipNameNr_QFontInfo,
        {0, 0, 1},
        12, methods_QFontInfo,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QFontInfo,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QFontInfo,
    0,
    0,
    0,
    release_QFontInfo,
    cast_QFontInfo,
    0,
    0,
    0
},
    0,
    0,
    0
};
