
package LMS;
import java.sql.*;
import javax.swing.JOptionPane;

public class CQ extends javax.swing.JFrame {
   
      Connection con;
      PreparedStatement pst;
      ResultSet rs;
      String selection=null;
      String ans=null;
      String q="1";
      int marks=0;
      int totalmarks=0;
      String m;
      int qn=1;
      char a;
      char b;
      
      
     
    public CQ() {
        initComponents();
    }


    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel1 = new javax.swing.JPanel();
        jLabel8 = new javax.swing.JLabel();
        h2 = new javax.swing.JPanel();
        jLabel1 = new javax.swing.JLabel();
        QNO = new javax.swing.JLabel();
        Q = new javax.swing.JLabel();
        oa = new javax.swing.JRadioButton();
        ob = new javax.swing.JRadioButton();
        oc = new javax.swing.JRadioButton();
        od = new javax.swing.JRadioButton();
        jButton2 = new javax.swing.JButton();
        opa = new javax.swing.JLabel();
        opb = new javax.swing.JLabel();
        opc = new javax.swing.JLabel();
        opd = new javax.swing.JLabel();
        hide = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        hd2 = new javax.swing.JLabel();
        nx = new javax.swing.JButton();
        jLabel3 = new javax.swing.JLabel();
        name = new javax.swing.JTextField();
        submeted = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jPanel1.setBackground(new java.awt.Color(0, 153, 153));
        jPanel1.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0)));

        jLabel8.setFont(new java.awt.Font("Times New Roman", 1, 24)); // NOI18N
        jLabel8.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jLabel8.setText("MCQs");

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGap(234, 234, 234)
                .addComponent(jLabel8, javax.swing.GroupLayout.PREFERRED_SIZE, 293, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jLabel8, javax.swing.GroupLayout.DEFAULT_SIZE, 45, Short.MAX_VALUE)
                .addContainerGap())
        );

        h2.setBorder(javax.swing.BorderFactory.createTitledBorder(""));

        jLabel1.setFont(new java.awt.Font("Times New Roman", 1, 14)); // NOI18N
        jLabel1.setText("Q.NO :");

        QNO.setFont(new java.awt.Font("Times New Roman", 1, 14)); // NOI18N

        Q.setFont(new java.awt.Font("Times New Roman", 1, 14)); // NOI18N

        oa.setText("A");
        oa.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                oaActionPerformed(evt);
            }
        });

        ob.setText("B");
        ob.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                obActionPerformed(evt);
            }
        });

        oc.setText("C");
        oc.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ocActionPerformed(evt);
            }
        });

        od.setText("D");
        od.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                odActionPerformed(evt);
            }
        });

        jButton2.setFont(new java.awt.Font("Times New Roman", 0, 14)); // NOI18N
        jButton2.setText("SUBMIT");
        jButton2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton2ActionPerformed(evt);
            }
        });

        opa.setFont(new java.awt.Font("Times New Roman", 0, 18)); // NOI18N

        opb.setFont(new java.awt.Font("Times New Roman", 0, 18)); // NOI18N

        opc.setFont(new java.awt.Font("Times New Roman", 0, 18)); // NOI18N

        opd.setFont(new java.awt.Font("Times New Roman", 0, 18)); // NOI18N

        nx.setFont(new java.awt.Font("Times New Roman", 0, 14)); // NOI18N
        nx.setText("START");
        nx.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                nxActionPerformed(evt);
            }
        });

        jLabel3.setFont(new java.awt.Font("Times New Roman", 0, 14)); // NOI18N
        jLabel3.setText("ENTER NAME:");

        name.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                nameActionPerformed(evt);
            }
        });

        submeted.setBackground(new java.awt.Color(204, 204, 0));
        submeted.setFont(new java.awt.Font("Times New Roman", 1, 14)); // NOI18N
        submeted.setForeground(new java.awt.Color(51, 255, 51));

        javax.swing.GroupLayout h2Layout = new javax.swing.GroupLayout(h2);
        h2.setLayout(h2Layout);
        h2Layout.setHorizontalGroup(
            h2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, h2Layout.createSequentialGroup()
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addGroup(h2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, h2Layout.createSequentialGroup()
                        .addComponent(hd2)
                        .addGap(181, 181, 181))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, h2Layout.createSequentialGroup()
                        .addComponent(jLabel2)
                        .addGap(150, 150, 150))))
            .addGroup(h2Layout.createSequentialGroup()
                .addGroup(h2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addGroup(javax.swing.GroupLayout.Alignment.LEADING, h2Layout.createSequentialGroup()
                        .addGap(22, 22, 22)
                        .addGroup(h2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(h2Layout.createSequentialGroup()
                                .addGap(9, 9, 9)
                                .addComponent(jLabel3, javax.swing.GroupLayout.PREFERRED_SIZE, 175, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(18, 18, 18)
                                .addComponent(name, javax.swing.GroupLayout.PREFERRED_SIZE, 219, javax.swing.GroupLayout.PREFERRED_SIZE))
                            .addGroup(h2Layout.createSequentialGroup()
                                .addComponent(jLabel1)
                                .addGroup(h2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addGroup(h2Layout.createSequentialGroup()
                                        .addComponent(QNO, javax.swing.GroupLayout.PREFERRED_SIZE, 53, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addGap(18, 18, 18)
                                        .addComponent(Q, javax.swing.GroupLayout.PREFERRED_SIZE, 543, javax.swing.GroupLayout.PREFERRED_SIZE))
                                    .addGroup(h2Layout.createSequentialGroup()
                                        .addComponent(oa, javax.swing.GroupLayout.PREFERRED_SIZE, 33, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addGap(18, 18, 18)
                                        .addComponent(opa, javax.swing.GroupLayout.PREFERRED_SIZE, 260, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addGap(177, 177, 177)
                                        .addGroup(h2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                            .addComponent(ob, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                            .addComponent(od, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addGroup(h2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                            .addComponent(opd, javax.swing.GroupLayout.PREFERRED_SIZE, 152, javax.swing.GroupLayout.PREFERRED_SIZE)
                                            .addComponent(opb, javax.swing.GroupLayout.PREFERRED_SIZE, 166, javax.swing.GroupLayout.PREFERRED_SIZE)))
                                    .addGroup(h2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                                        .addComponent(nx, javax.swing.GroupLayout.PREFERRED_SIZE, 98, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addGroup(h2Layout.createSequentialGroup()
                                            .addComponent(oc, javax.swing.GroupLayout.PREFERRED_SIZE, 33, javax.swing.GroupLayout.PREFERRED_SIZE)
                                            .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                                            .addComponent(opc, javax.swing.GroupLayout.PREFERRED_SIZE, 239, javax.swing.GroupLayout.PREFERRED_SIZE)))))))
                    .addGroup(javax.swing.GroupLayout.Alignment.LEADING, h2Layout.createSequentialGroup()
                        .addGap(107, 107, 107)
                        .addComponent(submeted, javax.swing.GroupLayout.PREFERRED_SIZE, 134, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(167, 167, 167)
                        .addGroup(h2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jButton2, javax.swing.GroupLayout.PREFERRED_SIZE, 105, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(hide, javax.swing.GroupLayout.PREFERRED_SIZE, 11, javax.swing.GroupLayout.PREFERRED_SIZE))))
                .addContainerGap(21, Short.MAX_VALUE))
            .addGroup(h2Layout.createSequentialGroup()
                .addGap(377, 377, 377)
                .addComponent(jLabel4, javax.swing.GroupLayout.PREFERRED_SIZE, 133, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(0, 0, Short.MAX_VALUE))
        );
        h2Layout.setVerticalGroup(
            h2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, h2Layout.createSequentialGroup()
                .addGroup(h2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(h2Layout.createSequentialGroup()
                        .addGroup(h2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                            .addGroup(h2Layout.createSequentialGroup()
                                .addGap(6, 6, 6)
                                .addComponent(jLabel2)
                                .addGap(107, 107, 107)
                                .addComponent(hd2)
                                .addGap(58, 58, 58))
                            .addGroup(javax.swing.GroupLayout.Alignment.LEADING, h2Layout.createSequentialGroup()
                                .addGap(47, 47, 47)
                                .addGroup(h2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                                    .addComponent(jLabel3, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.PREFERRED_SIZE, 38, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addComponent(name, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.PREFERRED_SIZE, 38, javax.swing.GroupLayout.PREFERRED_SIZE))
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 90, Short.MAX_VALUE)))
                        .addGroup(h2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(Q, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(jLabel1, javax.swing.GroupLayout.DEFAULT_SIZE, 45, Short.MAX_VALUE)
                            .addComponent(QNO, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                        .addGap(72, 72, 72)
                        .addGroup(h2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                            .addComponent(opa, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(opb, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(oa, javax.swing.GroupLayout.DEFAULT_SIZE, 32, Short.MAX_VALUE)
                            .addComponent(ob, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                        .addGroup(h2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                            .addGroup(h2Layout.createSequentialGroup()
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(od, javax.swing.GroupLayout.PREFERRED_SIZE, 31, javax.swing.GroupLayout.PREFERRED_SIZE))
                            .addGroup(javax.swing.GroupLayout.Alignment.LEADING, h2Layout.createSequentialGroup()
                                .addGap(28, 28, 28)
                                .addGroup(h2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(oc, javax.swing.GroupLayout.PREFERRED_SIZE, 29, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addComponent(opc, javax.swing.GroupLayout.PREFERRED_SIZE, 29, javax.swing.GroupLayout.PREFERRED_SIZE)))))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, h2Layout.createSequentialGroup()
                        .addGap(349, 349, 349)
                        .addComponent(opd, javax.swing.GroupLayout.PREFERRED_SIZE, 31, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jLabel4, javax.swing.GroupLayout.PREFERRED_SIZE, 27, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(h2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(nx, javax.swing.GroupLayout.PREFERRED_SIZE, 37, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jButton2, javax.swing.GroupLayout.PREFERRED_SIZE, 37, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 27, Short.MAX_VALUE)
                .addGroup(h2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(hide, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.PREFERRED_SIZE, 13, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(submeted, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.PREFERRED_SIZE, 27, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addContainerGap())
        );

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
            .addComponent(h2, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(h2, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void nameActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_nameActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_nameActionPerformed

    private void nxActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_nxActionPerformed
        if(name.getText().length()==0){JOptionPane.showMessageDialog(this,"Please Enter Name");}else{
            nx.setText("NEXT");
            submeted.setText("");
            jLabel3.setVisible(false);
            name.setVisible(false);

            selection=null;
            oa.setSelected(false);
            ob.setSelected(false);
            od.setSelected(false);
            oc.setSelected(false);

            try{

                CATQ_dao cd=new CATQ_dao();
                rs=cd.select(qn);

                while(rs.next()){
                    QNO.setText(rs.getString(1));
                    Q.setText(rs.getString(2));
                    opa.setText(rs.getString(4));
                    opb.setText(rs.getString(5));
                    opc.setText(rs.getString(6));
                    opd.setText(rs.getString(7));

                    ans=rs.getString(3);

                    q=QNO.getText();
                    qn++;
                }

            }catch(Exception ex){
                System.out.print(ex);
            }
        }
        if(qn==5){JOptionPane.showMessageDialog(this,"QUIZ ATTEMPT SUCCESSFULLY!");
            try{
                Class.forName("com.mysql.jdbc.Driver");
                String URL="jdbc:mysql://localhost:3306/lms";

                con = DriverManager.getConnection(URL,"root","");

                pst=con.prepareStatement("insert into `result` (`name`,`total_marks`) values(?,?)");
                pst.setString(1, name.getText());
                pst.setInt(2, totalmarks);
                pst.executeUpdate();
            }catch(Exception ex){System.out.println();}
            STM sm=new STM();
            this.dispose();
            sm.setVisible(true);
        }else{}
        // TODO add your handling code here:
    }//GEN-LAST:event_nxActionPerformed

    private void jButton2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton2ActionPerformed

        if(selection == null){JOptionPane.showMessageDialog(this,"please select option");}

        else{  if( selection == null ? ans == null : selection.equals(ans)){ m="1"; totalmarks++;}else{m="0";}

            try{

                Class.forName("com.mysql.jdbc.Driver");
                String URL="jdbc:mysql://localhost:3306/lms";

                con = DriverManager.getConnection(URL,"root","");

                pst=con.prepareStatement("insert into `review` (`name`,`question`,`answer`,`mark`) values(?,?,?,?)");
                pst.setString(1, name.getText());
                pst.setString(2, q);
                pst.setString(3, selection);
                pst.setString(4, m);
                pst.executeUpdate();
                jLabel4.setText(selection);

                submeted.setText("SUBMITED");
            }catch(ClassNotFoundException | SQLException ex){}
        }

    }//GEN-LAST:event_jButton2ActionPerformed

    private void odActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_odActionPerformed
        if(od.isSelected()){
            selection=od.getText();
            oa.setSelected(false);
            oc.setSelected(false);
            ob.setSelected(false);

        }      // TODO add your handling code here:
    }//GEN-LAST:event_odActionPerformed

    private void ocActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ocActionPerformed
        if(oc.isSelected()){
            selection=oc.getText();
            ob.setSelected(false);
            oa.setSelected(false);
            od.setSelected(false);
        }
        // TODO add your handling code here:
    }//GEN-LAST:event_ocActionPerformed

    private void obActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_obActionPerformed
        if(ob.isSelected()){
            selection=ob.getText();
            oa.setSelected(false);
            oc.setSelected(false);
            od.setSelected(false);
        }
        // TODO add your handling code here:
    }//GEN-LAST:event_obActionPerformed

    private void oaActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_oaActionPerformed

        if(oa.isSelected()){
            selection=oa.getText();
            ob.setSelected(false);
            oc.setSelected(false);
            od.setSelected(false);
        }

        // TODO add your handling code here:
    }//GEN-LAST:event_oaActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(CQ.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(CQ.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(CQ.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(CQ.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new CQ().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JLabel Q;
    private javax.swing.JLabel QNO;
    private javax.swing.JPanel h2;
    private javax.swing.JLabel hd2;
    private javax.swing.JLabel hide;
    private javax.swing.JButton jButton2;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel8;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JTextField name;
    private javax.swing.JButton nx;
    private javax.swing.JRadioButton oa;
    private javax.swing.JRadioButton ob;
    private javax.swing.JRadioButton oc;
    private javax.swing.JRadioButton od;
    private javax.swing.JLabel opa;
    private javax.swing.JLabel opb;
    private javax.swing.JLabel opc;
    private javax.swing.JLabel opd;
    private javax.swing.JLabel submeted;
    // End of variables declaration//GEN-END:variables
}