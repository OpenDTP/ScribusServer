#!/usr/bin/env python
# -*- coding: utf-8 -*-

import scribus

scribus.openDoc('/Users/mforaste/Desktop/gabarit_test.sla')
scribus.setText('Resultat concluant : ' + sys.argv[1], 'Text4')
scribus.saveDoc()
scribus.closeDoc()